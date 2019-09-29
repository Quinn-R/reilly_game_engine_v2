#include "MapEditor.hpp"

std::vector<std::vector<int> > MapEditor::mapLoad(std::string fileName) {
    /*
        create vector
        find file
        read file into vector
            resize vector
            if char is not '/' then read number
            if char is '/' then save current number into vector
            start again
    */
    std::vector<std::vector<int> > objRead;
    std::ifstream iFile;
    std::string tmp;
    int tmp2;

    iFile.open(fileName);

    for(int i = 0; iFile.eof(); i++) {
        objRead.resize(i + 1);
        tmp = iFile.get();
        while(tmp != ";") {
            if(tmp == "/") {
                objRead[i].push_back(tmp2);
            } else {
                tmp2 += iFile.get() - '0';
            }
            tmp = iFile.get();
        }
    }

    return objRead;
}
