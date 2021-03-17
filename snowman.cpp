#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <string.h>
//using namespace ariel;

const int size = 8;
const int five = 5;
const int six = 6;
const int seven = 7;
std::string ariel::snowman(int i) {
    std::string str = std::to_string(i);
    std::string string;
    int mone = 0;
    if(str.length()!=size){
        throw std::invalid_argument("The number must has exactly 8 digits");
    }
    for(int i=0; i<size; i++){
        if ((int(str.at(i)-'0'))>4 || (int(str.at(i)-'0'))<1){      
            throw std::invalid_argument("All digits should be 1-4");
        }
    }
    if((str.at(0)) == '1'){
         string += "\n"
                   " _===_\n";
    }
    else if(str.at(0)=='2'){
        string += "  ___ \n"
                     " .....\n";
    }
    else if(str.at(0)=='3'){
        string += "   _  \n"
                     "  /_\\\n";
    }
    else if(str.at(0)=='4'){
        string += "  ___ \n"
                     " (_*_)\n";
    }


    if(str.at(4)=='2'){
        string += "\\";
        if(str.at(2)=='1'){
            string += "(.";
        }
        else if(str.at(2)=='2'){
            string += "(o";
        }
        else if(str.at(2)=='3'){
            string += "(O";
        }
        else if(str.at(2)=='4'){
            string += "(-";
        }
    }
    else if(str.at(2)=='1'){
        string += " (.";
    }
    else if(str.at(2)=='2'){
        string += " (o";
    }
    else if(str.at(2)=='3'){
        string += " (O";
    }
    else if(str.at(2)=='4'){
        string += " (-";
    }



    if(str.at(1)=='1'){
        string += ",";
    }
    else if(str.at(1)=='2'){
        string += ".";
    }
    else if(str.at(1)=='3'){
        string += "_";
    }
    else if(str.at(1)=='4'){
        string += " ";
    }


    if(str.at(five)=='2'){
        if(str.at(3)=='1'){
            string += ".)";
        }
        else if(str.at(3)=='2'){
            string += "o)";
        }
        else if(str.at(3)=='3'){
            string += "O)";
        }
        else if(str.at(3)=='4'){
            string += "-)";
        }
        if(str.at(five)=='2'){
            string += "/\n";
        }
    }

    else if(str.at(3)=='1'){
        string += ".)\n";
    }
    else if(str.at(3)=='2'){
        string += "o)\n";
    }
    else if(str.at(3)=='3'){
        string += "O)\n";
    }
    else if(str.at(3)=='4'){
        string += "-)\n";
    }
    


    if(str.at(4)=='1'){
        string += "<(";
    }
    else if(str.at(4)=='3'){
        string += "/(";
    }
    else if(str.at(4)=='4'){
        string += " ( ";
    }
    else {
        string += " (";
    }



    if(str.at(six)=='1'){
        string += " : ";
    }
    else if(str.at(six)=='2'){
        string += "] [";
    }
    else if(str.at(six)=='3'){
        string += "> <";
    }
    else if(str.at(six)=='4'){
        string += "   ";
    }

    if(str.at(five)=='1'){
        string += ")>\n";
    }
    else if(str.at(five)=='3'){
        string += ")\\\n";
    }
    else if(str.at(five)=='4'){
        string += " )\n";
    }
    else if(str.at(five)=='2'){
        string += ")\n";
    }



    if(str.at(seven)=='1'){
        string += " ( : )\n";
    }
    else if(str.at(seven)=='2'){
        string += " (\" \")\n";
    }
    else if(str.at(seven)=='3'){
        string += " (___)\n";
    }
    else if(str.at(seven)=='4'){
        string += " (   )\n";
    }

    return string;
}