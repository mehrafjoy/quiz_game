
#include <iostream>
#include <string>
using namespace std;

struct Question
{
    string question;
    string options[4];
    char answer;
};

int main()
{
    Question quiz[5] =
    {
        {
            "Which language is used in this program?",
            {"A. HTML", "B. C++", "C. CSS", "D. SQL"},
            'B'
        },
        {
            "What is 5 + 3?",
            {"A. 6", "B. 7", "C. 8", "D. 9"},
            'C'
        },
        {
            "Which loop executes while a condition is true?",
            {"A. if", "B. switch", "C. break", "D. while"},
            'D'
        },
        {
            "Which symbol ends a C++ statement?",
            {"A. ;", "B. :", "C. ,", "D. ."},
            'A'
        },
        {
            "Which data type stores whole numbers?",
            {"A. float", "B. int", "C. char", "D. bool"},
            'B'
        }
    };

    int score = 0;
    char answer;

    cout << "===== C++ QUIZ GAME =====\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nQuestion " << i + 1 << ": "
             << quiz[i].question << '\n';

        for (int j = 0; j < 4; j++)
        {
            cout << quiz[i].options[j] << '\n';
        }

        cout << "Your answer (A/B/C/D): ";
        cin >> answer;

        if (answer >= 'a' && answer <= 'z')
            answer -= ('a' - 'A');

        if (answer == quiz[i].answer)
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Incorrect! Correct answer: "
                 << quiz[i].answer << '\n';
        }
    }

    cout << "\n===== FINAL RESULT =====\n";
    cout << "Total questions: 5\n";
    cout << "Correct answers: " << score << '\n';
    cout << "Wrong answers: " << 5 - score << '\n';
    cout << "Percentage: " << score * 20 << "%\n";

    return 0;
}
