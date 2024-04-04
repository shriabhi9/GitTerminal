#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string input;

    cout << "Version Control Terminal (Git)\n";
    cout << "Type 'exit' to quit.\n\n";

    while (true)
    {
        cout << "$ ";
        getline(cin, input);

        if (input == "exit")
        {
            cout << "Exiting...\n";
            break;
        }
        else
        {
            string git_command = "git " + input;
            int status = system(git_command.c_str());
            if (status != 0)
            {
                cout << "Command failed with exit code: " << status << endl;
            }
        }
    }

    return 0;
}
