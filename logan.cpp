#include <iostream>
#include <string>
#include <vector>
 
int message(std::string message, std::string choicesMessage, std::string choices);

int extendedMessage(std::vector<std::string> messages, std::string choicesMessage, std::string choices);

int main(){

     int userInput = extendedMessage({"You're in a school, sitting in front of a computer ", "and you don't care"},
               "y: leave, n: stay", "yn");
     
     if(userInput == 0){
          std::cout << "You left " << std::endl;

          userInput = extendedMessage({"EEEE ", "and you don't care"},
               "y: leave, n: stay", "yn");
          
          if(userInput == 0)
               std::cout << "You left " << std::endl;

          if(userInput == 1)
               std::cout << "You stay " << std::endl;
     }
          

     if(userInput == 1)
          std::cout << "You stay " << std::endl;

     

     

     

     //std::cout <<userInput << std::endl;

     system("pause");
     return 0;
}


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
