#include <iostream>
#include <string>
#include <vector>
 
int message(std::string message, std::string choicesMessage, std::string choices);

int extendedMessage(std::vector<std::string> messages, std::string choicesMessage, std::string choices);

int main(){

     int userInput = extendedMessage({"You're in a school, sitting in front of a computer ", "and you don't care"},
               "y: leave, n: stay", "yn");

     if(userInput == 0)
          goto Option1;
        
     if(userInput == 1)
          goto Option2;
          
     
     Option1: 
          userInput = extendedMessage({"You left and you don't care", "EEEEE"}, "y: Go home, n: Die", "yn"); 
          if(userInput == 0)
               goto End;
          
          if(userInput == 1)
               goto YouDied;

     Option2:
          userInput = extendedMessage({"you stayed for some reason"}, "p: program, r: run, j: jump", "prj");
          if(userInput == 0)
               goto Program;

          if(userInput > 0)
               goto Overexertion;
     //std::cout <<userInput << std::endl;

     Program:
          std::cout << "You start to program." << std::endl;
          goto End;

     Overexertion:
          std::cout << "You overexerted yourself." << std::endl;
          goto YouDied;

     YouDied:
          std::cout << "You Died." << std::endl;

     End:
          system("pause");
     return 0;
}
/*   if(userInput == 1){
          std::cout << "You stayed " << std::endl;

          userInput = extendedMessage({"and you really regret your choice"},
               "y: keep programming, n: do something ", "yn");

*/

int message(std::string message, std::string choicesMessage, std::string choices)
{
     std::string userInput;
     std::cout << message << std::endl;
     std::cout << choicesMessage << std::endl;
     std::cin >> userInput;

     for(int i = 0; i < choices.size(); ++i)
     {
          if(userInput[0] == choices[i])
               return i;
     }

     return -1;
}


int extendedMessage(std::vector<std::string> messages, std::string choicesMessage, std::string choices){
     for(int i = 0; i < messages.size() - 1; ++i){
          std::cout << messages[i] << std::endl;
     }
     
     return message(messages[messages.size() - 1], choicesMessage, choices);
}
