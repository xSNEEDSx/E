#include <iostream>
#include <string>
#include <vector>
 
int message(std::string message, std::string choicesMessage, std::string choices);

int extendedMessage(std::vector<std::string> messages, std::string choicesMessage, std::string choices);

int main(){

     int userInput = extendedMessage({"you're in a school, sitting in front of a computer ", "and you don't care"},
               "l: leave, s: stay", "ls");

     if(userInput == 0)
          goto Option1;
        
     if(userInput == 1)
          goto Option2;
          
     
     Option1: 
          userInput = extendedMessage({"you left and you don't care"}, "h: go home, d: die", "hd"); 
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
     std::cout <<userInput << std::endl;

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
               goto ProgrammingThings;
          if(userInput == 1)
               goto SilentOrNot;
          if(userInput == 2)
               goto SilentOrNotTwo;
          if(userInput == 3)
               goto Sky;

     Social:
          userInput = extendedMessage({"are you sure?"}, "y: yes, n: no", "yn");
          if(userInput == 0)
               goto End;
          if(userInput == 1)
               goto Talk;
               
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

     SilentOrNot:
          userInput = extendedMessage({"do you want to talk silently or not?"}, "s: silently, n: not silently", "sn");
          if(userInput == 0)
               goto Silent;
          if(userInput == 1)
               goto WeHear;

     SilentOrNotTwo:
          userInput = extendedMessage({"do you want to talk silently or not?"}, "s: silently, n: not silently", "sn");
          if(userInput == 0)
               goto SilentTwo;
          if(userInput == 1)
               goto WeHear;

     Silent:
          userInput = extendedMessage({"you decide to talk silently, as to not alert the other of being off task"}, "s: talk about the state of the game, p: talk about playing the game later", "sp");
          if(userInput == 0)
               goto StateOfGame;
          if(userInput == 1)
               goto PlayingGame;

     SilentTwo:
          userInput = extendedMessage({"you decide to talk silently, as to not alert the other of being off task"}, "i: talk about all the inappropriate jokes you want to make, m: talk about the next time you guys will meet up", "im");
          if(userInput == 0)
               goto Redacted;
          if(userInput == 1)
               goto NextTime;

     NextTime:
          userInput = extendedMessage({"Jett: i don't know, have any thoughts?"}, "y: actually i do, n: no. not really", "yn");
          if(userInput == 0)
               goto Ideas;
          if(userInput == 1)
               goto JettFour;

     Ideas:
          userInput = extendedMessage({"You: actually, i was thinking we could..."}, "s: go ice skating, m: watch a movie, h: just hang out", "smh");
          if(userInput == 0)
               goto IceSkatingTime;
          if(userInput == 1)
               goto MovieTime;
          if(userInput == 2)
               goto HangOutTime;

     IceSkatingTime:
          userInput = extendedMessage({"Jett: yeah, i guess, would have to check with Lyna on that as well, but what time would you want to do that?"}, "w: maybe next week?, m: maybe next month?, i: i don't know... i can never decide", "wmi");
          if(userInput == 0)
               goto Maybe;
          if(userInput == 1)
               goto Probably;
          if(userInput == 2)
               goto MakesSense;

     Maybe:
          userInput = extendedMessage({""})
          if(userInput == 0)
               goto Ok;
          if(userInput == 1)
               goto 

     Ok:
          std::cout << "You: ok"
               goto 
     
     SilentTwoPartTwo:
          userInput = extendedMessage({"you decide to talk silently, as to not alert the other of being off task"}, "m: talk about the next time you guys will meet up, n: nevermind", "mn");
          if(userInput == 0)
               goto NextTime;
          if(userInput == 1)
               goto JettFour;

     Redacted:
          std::cout << "This isn't going here right now. maybe later" << std::endl;
               goto SilentTwoPartTwo;

     StateOfGame:
          userInput = extendedMessage({"what about the state of the game do you want to talk about?"}, "b: how bad it is, r: how you want the old Fortnite back, f: how you think that the game is fine the way it is, n: nevermind", "brfn");
          if(userInput == 0)
               goto AgreedTwo;
          if(userInput == 1)
               goto OldFortnite;
          if(userInput == 2)
               goto MmHm;
          if(userInput == 3)
               goto Nevermind;

     PlayingGame:
          std::cout << "not an option, lol" << std::endl;
               goto JettThree;

     Nevermind:
          std::cout << "Jett: ok..." << std::endl;
               goto Jett;

     AgreedTwo:
          std::cout << "Jett: yeah, agreed, pretty bad in it's current state to be honest" << std::endl;
               goto JettThree;

     OldFortnite:
          std::cout << "You: i want the old Fortnite back, it used to be so fun to play" << std::endl;
               goto YeahOk;

     MmHm:
          std::cout << "Jett: Mm, ok" << std::endl;
               goto JettThree;

     YeahOk:
          std::cout << "Jett: yeah, ok, i don't care" << std::endl;
               goto JettThree;

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
          userInput = extendedMessage({"so, Jett"}, "t: what are your thoughts on this college board create assignment?, g: i think my game code can be used for this college board assignment, n: nevermind", "tgn");
          if(userInput == 0)
               goto DontCare;
          if(userInput == 1)
               goto No;
          if(userInput == 2)
               goto Nevermind;

     DontCare:
          std::cout << "Jett: i don't really know..." << std::endl;
               goto Talk;

     No:
          std::cout << "Jett: cool, i don't care" << std::endl;
               goto Talk;

     WeHear:
          userInput = extendedMessage({"other: we hear you being off task"}, "r: no, u: no, n: no", "run");
          if(userInput == 0)
               goto YouDied;
          if(userInput == 1)
               goto YouDied;
          if(userInput == 2)
               goto YouDied;

     Yell:
          userInput = extendedMessage({"Jett: well, what do you want me to do about it? i'm not the to go to programmer."}, "f: fix it lol, d: i don't know. sorry", "fd");
          if(userInput == 0)
               goto Anger;
          if(userInput == 1)
               goto Fine;

     DidItMyself:
          userInput = extendedMessage({"Jett: yeah, i did it myself, thanks"}, "j: jk it's broken, w: you're welcome, f: speaking of fine, you're looking fine as well", "jwf");
          if(userInput == 0)
               goto AngerTwo;
          if(userInput == 1)
               goto JettTwo;
          if(userInput == 2)
               goto Why;

     Agreed:
          std::cout << "Hunter: agreed. Jett: yes" << std::endl;
               goto RoboTwo;

     RoboTwo:
          userInput = extendedMessage({"what about the robot program do you want to say to him now?"}, "p: the robot isn't working properly, f: i think the robot is working just fine", "pf");
          if(userInput == 0)
               goto Yell;
          if(userInput == 1)
               goto DidItMyself;

     AngerTwo:
          userInput = extendedMessage({"Jett: oh, fun fact, i didn't write that code"}, "k: yeah i know. lol, r: oh really?, g: got it", "krg");
          if(userInput == 0)
               goto OkThen;
          if(userInput == 1)
               goto Yep;
          if(userInput == 2)
               goto JettTwo;

     Why:
          userInput = extendedMessage({"Jett: oh, um, thanks?"}, "w: yep. you're welcome, j: you're welcome Jetty", "wj");
          if(userInput == 0)
               goto Disappointed;
          if(userInput == 1)
               goto DontCallMeThat;

     DontCallMeThat:
          std::cout << "Jett: don't call me that" << std::endl;
               goto JettTwo;

     OkThen:
          userInput = extendedMessage({"Jett: then why'd you tell me that?"}, "w: because why not, a: to make you feel accomplished, i: idk lol", "wai");
          if(userInput == 0)
               goto Disappointed;
          if(userInput == 1)
               goto Thanks;
          if(userInput == 2)
               goto Disappointed;

     Yep:
          std::cout << "Jett: yep, so don't ask me about it" << std::endl;
               goto JettTwo;

     Disappointed:
          std::cout << "Jett: ..." << std::endl;
               goto JettTwo;

     Thanks:
          userInput = extendedMessage({"Jett: oh, thanks, but why?"}, "k: because i'm like that. always positive, l: because i like you, r: no reason", "klr");
          if(userInput == 0)
               goto ThatNice;
          if(userInput == 1)
               goto Oh;
          if(userInput == 2)
               goto ThatNice;

     ThatNice:
          std::cout << "Jett: nice" << std::endl;
               goto JettTwo;

     Oh:
          std::cout << "Jett: oh, ok..." << std::endl;
               goto JettTwo;

     Fine:
          userInput = extendedMessage({"Jett: that's fine, i don't want to fix it anyway"}, "g: go somewhere else, s: stay and talk with Jett", "gs");
          if(userInput == 0)
               goto SomethingElse;
          if(userInput == 1)
               goto JettTwo;
          
     Anger:
          userInput = extendedMessage({"Jett: no"}, "g: go elsewhere, s: stay to talk about something else", "gs");
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
          userInput = extendedMessage({"you talk to Jett again"}, "f: talk about Fortnite, l: talk about Lyna, w: talk about the weather, j: don't talk to Jett", "flwj");
          if(userInput == 0)
               goto SilentOrNot;
          if(userInput == 1)
               goto SilentOrNotTwo;
          if(userInput == 2)
               goto Sky;
          if(userInput == 3)
               goto SomethingElse;

     JettThree:
          userInput = extendedMessage({"you talk to Jett again"}, "p: talk about programming things, l: talk about Lyna, w: talk about the weather, j: don't talk to Jett", "plwj");
          if(userInput == 0)
               goto ProgrammingThings;
          if(userInput == 1)
               goto SilentOrNotTwo;
          if(userInput == 2)
               goto Sky;
          if(userInput == 3)
               goto SomethingElse;

     JettFour:
          userInput = extendedMessage({"you talk to Jett again"}, "p: talk about programming things, f: talk about Fortnite, w: talk about the weather, j: don't talk to Jett", "plwj");
          if(userInput == 0)
               goto ProgrammingThings;
          if(userInput == 1)
               goto SilentOrNot;
          if(userInput == 2)
               goto Sky;
          if(userInput == 3)
               goto SomethingElse;

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
