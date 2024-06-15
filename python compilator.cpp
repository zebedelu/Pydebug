#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void replace(string& str, const string& from, const string& to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main(int argc, char* argv[]) {

    // Enter the normal python compiler options here
    // Use python -h to see more
    // If you use python2 change the "python" to "python2"
    // Don't rename the "<file>"

    // Insira opções normais do compilador do python aqui
    // Use python -h para ver mais
    // Se você usa o python2 mude o "python" para "python2"
    // Não mude o nome do "<file>"

    string comando = "python <file>";

    if (argc > 1) {

        replace(comando, "<file>", "\"" + string(argv[1]) + "\"");
        
        system(comando.c_str());
        system("pause");
    }

    return 0;
}
