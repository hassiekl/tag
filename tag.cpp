#include <iostream>
using namespace std;
struct Def{

    string output = "";
    string tag = "";


};
int main()
{
    Def def;
    int app = 0;
    def.output = "abcdefghii" + (app + 0);

    for (int index = 0; index < 11; ++index){
        def.output[index];
        /* def.tag[index] = def.output[index] / --app; */
        def.output[index] = def.output[index] / --app;
        cout << def.output[index];
        }


    return 0;
}
