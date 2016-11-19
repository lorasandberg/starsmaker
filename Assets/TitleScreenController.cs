using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class TitleScreenController : MonoBehaviour {

    public Button startButton;
    public Button instructionsButton;
    public Button quitButton;

    // Use this for initialization
	void Start ()
    {
        startButton.GetComponent<Button>().onClick.AddListener(StartGame);
        instructionsButton.GetComponent<Button>().onClick.AddListener(OpenInstructions);
        quitButton.GetComponent<Button>().onClick.AddListener(QuitGame);
    }
	
    void StartGame()
    {
        SceneManager.LoadScene("main");
    }

    void OpenInstructions()
    {

    }

    void QuitGame()
    {
        Application.Quit();
    }
}
