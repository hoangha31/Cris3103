#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char *argv[]){
    const char *s1= argv[1];
    const char *s2 = argv[2];

    int cnt = 0;
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);


    for (size_t i = 0; i <= len2 - len1; ++i) {
        if (strncmp(s1, s2 + i, len1) == 0) {
            ++cnt;
        }
    }

    cout << "The string \"" << s1 << "\" appears " << cnt << " times in the string \"" << s2 << "\"" << std::endl;

}
