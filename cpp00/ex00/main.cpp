#include <iostream>

using namespace std;

int str(char *s)
{
    int i;

    for (i = 0; s && s[i]; i++);
    return (i);
}

char ft_toupper(char c){
    return ((c >= 97 && c <= 122) ? c - 32 : c);
}

int main(int argc, char **argv){

    if (argc <= 1) {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return (0);
    } else {
        int i = 1;
        while (i < argc){
            int j = 0;
            while (j < str(argv[i])){
                cout << ft_toupper(argv[i][j]);
                j++;
            }
            i++;
        }
    }
    cout << endl;
    return (0);
}