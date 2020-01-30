#include <iostream>
#include <string>
#include <vector>
 
int message(std::string message, std::string choicesMessage, std::string choices);

int extendedMessage(std::vector<std::string> messages, std::string choicesMessage, std::string choices);

int main(){

     int userInput = extendedMessage({"you're in a school, sitting in front of a computer ", "and you don't care"},
               "y: leave, n: stay", "yn");

     if(userInput == 0)
          goto Option1;
        
     if(userInput == 1)
          goto Option2;
          
     
     Option1: 
          userInput = extendedMessage({"you left and you don't care"}, "y: go home, n: die", "yn"); 
          if(userInput == 0)
               goto End;
          
          if(userInput == 1)
               goto YouDied;

     Option2:
          userInput = extendedMessage({"you stayed for some reason"}, "p: program, r: run, t: talk to others", "prt");
          if(userInput == 0)
               goto Program;

          if(userInput == 1)
               goto Overexertion;

          if(userInput == 2)
               goto Talk;
     //std::cout <<userInput << std::endl;

     Program:
          std::cout << "you start to program." << std::endl;
          goto End;

     Overexertion:
          std::cout << "you overexerted yourself." << std::endl;
          goto YouDied;

     YouDied:
          std::cout << "you died." << std::endl;

     End:
          system("pause");
     return 0;

     Talk:
          userInput = extendedMessage({"you go to talk to others, but don't know who to talk to"}, "l: talk to Lyna, j: talk to Jett, h: talk to Hunter, c: talk to programmer Cole, s: don't talk because you're not social", "ljhcs");
          if(userInput == 0)
               goto Lyna;
          if(userInput == 1)
               goto Jett;
          if(userInput == 2)
               goto Hunter;
          if(userInput == 3)
               goto Cole;
          if(userInput == 4)
               goto Social;

     Lyna:
          userInput = extendedMessage({"you go to talk to Lyna, but that is being off task"}, "r: no getting off task, u: no getting off task, n: no getting off task", "run");
          if(userInput == 0)
               goto YouDied;
          if(userInput == 1)
               goto YouDied;
          if(userInput == 2)
               goto YouDied;

    Jett:
          userInput = extendedMessage({"you go to talk to Jett, so you didn't seem off task, as he is also a programming member"}, "p: talk about programming things, f: talk about Fortnite, l: talk about Lyna, w: talk about the weather", "pflw");
          if(userInput == 0)
               goto ProgrammingThings
          if(userInput == 1)
               goto SilentOrNot;
          if(userInput == 2)
               goto SilentOrNot;
          if(userInput == 3)
               goto Sky;
               
     ProgrammingThings:
          userInput = extendedMessage({"what programming things do you want to talk about?"}, "r: robotics programming, c: that create task for computer science, d: the destroyer device, because that's an option, g: your nice game code", "rcdg");
          if(userInput == 0)
               goto Robo;
          if(userInput == 1)
               goto Eh;
          if(userInput == 2)
               goto WeHear;
          if(userInput == 3)
               goto WeHear;

     Robo:
          userInput = extendedMessage({"what about the robot program do you want to say to him?"}, "p: the robot isn't working properly, f: i think the robot is working just fine, c: i want to convert this robot to communism", "pfc");
          if(userInput == 0)
               goto Yell;
          if(userInput == 1)
               goto DidItMyself;
          if(userInput == 2)
               goto Agreed;

     Eh:
          userInput = extendedMessage({"other: we'll allow that... for now"}, "w: what?, o: ok..., y: yeah. ok. boomer", "woy");
          if(userInput == 0)
               goto Create;
          if(userInput == 1)
               goto Create;
          if(userInput == 2)
               goto Create;

     Create:
          userInput = extendedMessage({"so, Jett"}, "t: what are your thoughts on this college board create assignment?")

     WeHear:
          userInput = extendedMessage({"other: we hear you being off task"}, "r: no, u: no, n: no", "run");
          if(userInput == 0)
               goto YouDied;
          if(userInput == 1)
               goto YouDied;
          if(userInput == 2)
               goto YouDied;

     Yell:
          userInput = extendedMessage({"Jett responds with: well, what do you want me to do about it? i'm not the to go to programmer."}, "f: fix it lol, d: i don't know. sorry", "fd");
          if(userInput == 0)
               goto Anger;
          if(userInput == 1)
               goto Fine;

     Fine:
          userInput = extendedMessage({"that's fine, i don't want to fix it anyway"}, "g: go somewhere else, s: stay and talk with Jett", "gs");
          if(userInput == 0)
               goto SomethingElse;
          if(userInput == 1)
               goto JettTwo;
          
     Anger:
          userInput = extendedMessage({"Jett responds with: no."}, "g: go elsewhere, s: stay to talk about something else", "gs");
          if(userInput == 0)
               goto SomethingElse;
          if(userInput == 1)
               goto JettTwo;

     SomethingElse:
          userInput = extendedMessage({"what do you want to do now?"}, "t: talk to others, p: program", "tp");
          if(userInput == 0)
               goto TalkTwo;
          if(userInput == 1)
               goto Program;

     TalkTwo:
          userInput = extendedMessage({"you go to talk to others, but don't know who to talk to"}, "l: talk to Lyna, h: talk to Hunter, c: talk to programmer Cole, s: don't talk because you're not social", "lhcs");
          if(userInput == 0)
               goto Lyna;
          if(userInput == 1)
               goto Hunter;
          if(userInput == 2)
               goto Cole;
          if(userInput == 3)
               goto Social;

     JettTwo:
          userInput = extendedMessage({"you talk to Jett again"}, "f: talk about Fortnite, l: talk about Lyna, w: talk about the weather", "flw");
          if(userInput == 0)
               goto SilentOrNot;
          if(userInput == 1)
               goto SilentOrNot;
          if(userInput == 2)
               goto Sky;
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
