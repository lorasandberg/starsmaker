using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class StellarObjectController : MonoBehaviour {


    int addedBodies = 0;
    public GameObject prefab;
    public GameObject sunPrefab;
    List<GameObject> stellarObjects;

    // Use this for initialization
    void Start() {
        Debug.Log("Start");
        stellarObjects = new List<GameObject>();

        //add sun
        addBody(Vector3.zero, 100, Vector3.zero, sunPrefab);
    }

    // Update is called once per frame
    void Update() {

    }

    public List<GameObject> getList() {
        return stellarObjects;
    }

    public void addBody(Vector3 loc, float mass, Vector3 speed)
    {
        addBody(loc, mass, speed, prefab);
    }

    public void addBody(Vector3 loc, float mass, Vector3 speed, GameObject prefab)
    {
        GameObject temp = (GameObject)Object.Instantiate(prefab, loc, Quaternion.identity);
        temp.GetComponent<Rigidbody>().mass = mass;
        speed.y = 0;
        temp.GetComponent<Rigidbody>().velocity = speed;

        Renderer rend = temp.GetComponent<Renderer>();
        rend.material.color = hexToColor(colors[addedBodies]);

        stellarObjects.Add(temp);
        addedBodies++;
    }

    string[] colors = new string[] {
        "#ba0900", "#3b9700", "#962b75", "#ff4a46", "#0086ed", "#f4d749", "#a4e804", "#bc23ff",
        "#c6dc99", "#7A4900", "#0000A6", "#63FFAC", "#B79762", "#004D43", "#8FB0FF", "#997D87",
        "#5A0007", "#809693", "#FEFFE6", "#1B4400", "#4FC601", "#3B5DFF", "#4A3B53", "#FF2F80",
        "#61615A", "#BA0900", "#6B7900", "#00C2A0", "#FFAA92", "#FF90C9", "#B903AA", "#D16100",
        "#DDEFFF", "#000035", "#7B4F4B", "#A1C299", "#300018", "#0AA6D8", "#013349", "#00846F",
        "#372101", "#FFB500", "#C2FFED", "#A079BF", "#CC0744", "#C0B9B2", "#C2FF99", "#001E09",
        "#00489C", "#6F0062", "#0CBD66", "#EEC3FF", "#456D75", "#B77B68", "#7A87A1", "#788D66",
        "#885578", "#FAD09F", "#FF8A9A", "#D157A0", "#BEC459", "#456648", "#0086ED", "#886F4C",

        "#34362D", "#B4A8BD", "#00A6AA", "#452C2C", "#636375", "#A3C8C9", "#FF913F", "#938A81",
        "#575329", "#00FECF", "#B05B6F", "#8CD0FF", "#3B9700", "#04F757", "#C8A1A1", "#1E6E00",
        "#7900D7", "#A77500", "#6367A9", "#A05837", "#6B002C", "#772600", "#D790FF", "#9B9700",
        "#549E79", "#FFF69F", "#201625", "#72418F", "#BC23FF", "#99ADC0", "#3A2465", "#922329",
        "#5B4534", "#FDE8DC", "#404E55", "#0089A3", "#CB7E98", "#A4E804", "#324E72", "#6A3A4C",
        "#83AB58", "#001C1E", "#D1F7CE", "#004B28", "#C8D0F6", "#A3A489", "#806C66", "#222800",
        "#BF5650", "#E83000", "#66796D", "#DA007C", "#FF1A59", "#8ADBB4", "#1E0200", "#5B4E51",
        "#C895C5", "#320033", "#FF6832", "#66E1D3", "#CFCDAC", "#D0AC94", "#7ED379", "#012C58"
        };

    static Color hexToColor(string hex)
    {
        hex = hex.Replace("#", "");//in case the string is formatted #FFFFFF
        byte a = 255;//assume fully visible unless specified in hex
        byte r = byte.Parse(hex.Substring(0, 2), System.Globalization.NumberStyles.HexNumber);
        byte g = byte.Parse(hex.Substring(2, 2), System.Globalization.NumberStyles.HexNumber);
        byte b = byte.Parse(hex.Substring(4, 2), System.Globalization.NumberStyles.HexNumber);
        //Only use alpha if the string has enough characters
        if (hex.Length == 8)
        {
            a = byte.Parse(hex.Substring(4, 2), System.Globalization.NumberStyles.HexNumber);
        }
        return new Color32(r, g, b, a);
    }
}
