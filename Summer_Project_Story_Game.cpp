#include <iostream>

#include <string>

#include <cstdlib>

#include <unistd.h>

#include <ctime>

using namespace std;

class Game {
public: virtual void play(const string & playerName) = 0;
    virtual~Game() = default;
    
};

class RockPaperScissorsGame {
public: static void play(string & result) {

        string choices[] = {
                "rock",
                "paper",
                "scissors"
        };
        int computerChoice = rand() % 3;

        string userChoice;
        cout << "\nEnter your choice (rock, paper, scissors): ";
        cin >> userChoice;

        if (userChoice == choices[computerChoice]) {
            result = "Tie";
        } else if (
                (userChoice == "rock" && choices[computerChoice] == "scissors") ||
                (userChoice == "paper" && choices[computerChoice] == "rock") ||
                (userChoice == "scissors" && choices[computerChoice] == "paper")) {
            result = "User";
        } else {
            result = "Computer";
        }
    }
};

class WinterIsComing: public Game {
public: void play(const string & playerName) override {

        sleep(5);

        string position;
        int lives;

        int first_special_number = rand() % 100;

        if (first_special_number < 25) {
            position = "peasant";
            lives = 3;
        } else if (first_special_number < 60) {
            position = "Squire";
            lives = 4;
        } else if (first_special_number < 80) {
            position = "Knight";
            lives = 5;
        } else {
            position = "Lord";
            lives = 6;
        }

        while (lives > 0) {
            cout << "\nWelcome to the world of Game of Thrones!" << endl;

            if (position == "peasant") {
                cout << "\nYou were born a peasant in King's Landing. "
                        "With no special talent, you live a boring life and die. "
                        "Sorry, you low-born peasant." << endl;
                lives = 0;
            }

            if (position == "Squire") {
                char answer;
                cout << "\nAs a Squire, you have the opportunity to change your life "
                        "and become a Knight, but it will require hard training. "
                        "Would you like to become a Knight by training hard and losing one of your lives? "
                        "Yes => Y or No => N" << endl;
                cin >> answer;

                if (answer == 'Y' || answer == 'y') {
                    position = "Knight";
                    lives -= 1;
                    cout << "\nNow you are a " << position << " and have " << lives << " lives." << endl;
                } else {
                    cout << "\nAs an average Squire and not an amazing Knight, you remain working until the Knight you served"
                            " was killed in battle and no one else wanted you as their Squire. "
                            "So you died in the future after living a pretty uneventful life." << endl;
                    lives = 0;
                }
            }

            if (position == "Knight") {
                string night_watch;
                cout << "\nSer " << playerName <<
                     ", you are a respected Knight in the Seven Kingdoms, but you have always wondered, "
                     "if that was all you could accomplish in life. "
                     "Now you have the opportunity to join the Night's Watch.\nAnswer me yes or no." << endl;
                cin >> night_watch;

                if (night_watch == "Yes" || night_watch == "yes") {
                    string Oath;
                    cout << "\nBrother " << playerName << ", welcome to the Night's Watch. Jon Snow will now teach you to fight. "
                                                          "You were a knight, but you still need to train to get "
                                                          "strong enough to battle Wildlings." << endl;
                    sleep(5);
                    cout << "\nWell Brother " << playerName << ", you now have to state your Oath. Do you accept? "
                                                               "Answer me now Yes or No." << endl;
                    cin >> Oath;

                    if (Oath == "Yes" || Oath == "yes") {
                        sleep(3);
                        cout << "\n\nNight gathers, and now my watch begins. It shall not end until my death. I shall take no wife, "
                                "hold no lands, father no children. I shall wear no crowns and win no glory. I shall live and die at my post. "
                                "I am the sword in the darkness. I am the watcher on the walls. I am the fire that burns against the cold, "
                                "the light that brings the dawn, the horn that wakes the sleepers, the shield that guards the realms of men. "
                                "I pledge my life and honor to the Night’s Watch, for this night and all the nights to come." << endl;
                        sleep(10);
                        cout << "\nWelcome, Brother " << playerName << ", now you are a true member of the Night's Watch." << endl;
                        sleep(3);
                        cout << "\nNow it's time for you to go on your first mission, Brother." << endl;
                        sleep(3);
                        cout << "\nWe are going beyond the wall to investigate the White Walkers." << endl;
                        sleep(3);
                        cout << "\nThe mission takes us from the Wall to Craster's Keep, and then the Brothers "
                                "go out to the Fist of the First Men. " <<
                             "After finding Qhorin, the ranger that lives beyond the Wall, Jon Snow goes missing "
                             "and the search begins to find him." << endl;
                        sleep(5);
                        cout << "\nWhite Walkers are spotted from afar, and as a previous Knight, you stand bravely "
                                "to defeat the White Walkers so your Brothers can escape." << endl;
                        sleep(5);
                        cout << "\nYou die fighting the White Walkers, but your Brothers are able to escape safely. "
                                "Your sacrifice will not be forgotten, Brother, as your watch has ended with bravery." << endl;
                        sleep(2);
                        lives = 0;
                    } else {
                        cout << "\nYou have rejected taking the Oath, and you are taken out of Castle Black." << endl;
                        sleep(3);
                        cout << "\nAs you were a knight, you go back to King's Landing." << endl;
                        sleep(3);
                        cout << "\nKing Joffrey hears about you leaving the Night's Watch, he orders your death stating, "
                                "he doesn't want any cowards being Knights in his Kingdom." << endl;
                        sleep(2);
                        lives = 0;
                    }
                } else {
                    string death_mark;
                    cout << "\nSer " << playerName << ", you have rejected going to the Night's Watch, so what are you going to do? " <<
                         "Staying in the King's Guard or joining King Robb in the War of The Five Kings as your family is from the North. "
                         "Write Guard or Robb to choose." << endl;
                    cin >> death_mark;

                    if (death_mark == "Guard" || death_mark == "guard") {
                        sleep(3);
                        cout << "\nSer " << playerName << ", you have stayed as one of King Joffrey's royal guards. "
                                                          "Be careful, Stannis Baratheon is said to be invading King's Landing soon." << endl;
                        sleep(3);
                        cout << "\nIt's the battle of Battle of the Blackwater. "
                                "Stannis's army is coming even after many died with the wildfire attack. " <<
                             "Hundreds of men are now battling at Blackwater Bay, you are killing many, "
                             "but the other side just has too many soldiers." << endl;
                        sleep(3);
                        cout << "\nYou died by the hands of one of Stannis's soldiers. You fought bravely, Ser " <<
                             playerName << ", may you rest in peace." << endl;
                        lives = 0;
                    } else if (death_mark == "Robb" || death_mark == "robb") {
                        sleep(3);
                        cout << "\nYou went back to your roots and are now fighting for the King in the North. "
                                "It is now the night of the Red Wedding." << endl;
                        sleep(3);
                        cout << "\nYour King is killed in front of you, everything you have fought for is over. "
                                "You are then killed fighting as a Brave Knight." << endl;
                        lives = 0;
                    }
                }
            }

            if (position == "Lord") {
                sleep(3);
                cout << "\nWelcome, Lord " << playerName << " of Winterfell. After your father's death, "
                                                            "you have decided to go to war with the new false King, Joffrey Baratheon." << endl;
                sleep(3);
                cout << "\n\nYou are now known as " << playerName << ", the ruler of the North." << endl;
                sleep(3);
                cout << "\nNow, because you weren't dumb enough to get married as you were currently "
                        "fighting in a war, your army pushes forward into King's Landing." << endl;
                sleep(5);
                string war;
                cout << "\nNow, should you fight for King's Landing or Ask King Joffrey to give your sister back?\n" <<
                     "Answer me by entering either War or Sister." << endl;
                cin >> war;

                if (war == "War" || war == "war") {
                    sleep(3);
                    cout << "\nYou have chosen war against King Joffrey and the Lannister army. "
                            "Now this won't be an easy battle, so prepare to die." << endl;
                    sleep(3);
                    cout << "\nJoffrey has been persuaded by his mother to keep your sister Sansa alive, and they believe that Arya is dead, "
                            "but they keep telling you they have her too, even though she is with you already." << endl;
                    sleep(4);
                    string battle_plan;
                    cout << "\nYou are now given the option to either form an elite group to enter King's Landing with Arya "
                            "to kill Joffrey and the rest of the Lannisters to save your sister, or attack them head-on." << endl;
                    sleep(5);
                    cout << "\n\nNow choose, type either Battle or Arya." << endl;
                    cin >> battle_plan;

                    if (battle_plan == "Arya" || battle_plan == "arya") {
                        sleep(3);
                        cout << "\nYou have gone with what Arya wanted you to do." << endl;
                        sleep(3);
                        cout << "\nYou are able to rescue Sansa but fail to kill anyone else and return to the North safely." << endl;
                        sleep(5);
                        cout << "\nKing Joffrey was killed at his wedding and the new King is weak, he won't ever want "
                                "to attack you in the North." << endl;
                        sleep(5);
                        cout << "\nSome time passes, and your brother Jon Snow comes to you about fighting together "
                                "with the Wildlings to defeat the Night King, " <<
                             "but he tells you that for the battle, all the possible support will be needed. "
                             "You refuse to have an alliance with the Lannisters, the people who killed your sister and father." << endl;
                        sleep(5);
                        cout << "\nYou create an alliance with the Queen of Dragons, destroy the Night King, "
                                "and to protect your people from her dragons, you give up your power to become Warden of the North." <<
                             "\n\nThe Queen of Dragons takes the Seven Kingdoms for herself as you live out the rest "
                             "of your life as a Warden." << endl;
                        sleep(2);
                        lives = 0;
                    } else if (battle_plan == "Battle" || battle_plan == "battle") {
                        sleep(3);
                        cout << "\nArya told you to believe in her skills, but you didn't." << endl;
                        sleep(3);
                        cout << "\n\nNow you are dead as your army was burned to death by Wildfire." << endl;
                        lives = 0;
                    }
                } else if (war == "Sister" || war == "sister") {
                    sleep(3);
                    cout << "\nJoffrey sees this as a moment of weakness, he kills Sansa for fun in the same way "
                            "he killed your father, Eddard Stark." << endl;
                    sleep(3);
                    cout << "\nDevastated by the death of your sister, you still have to fight him in battle "
                            "or run away, keeping your crown as the ruler of the North." << endl;
                    sleep(5);
                    string final_choice;
                    cout << "\nYou now have the final choice to either fight King Joffrey or return to the North, "
                            "where no one will be able to defeat you.\n\nNow write Fight or Return to choose your fate." << endl;
                    cin >> final_choice;

                    if (final_choice == "Fight" || final_choice == "fight") {
                        sleep(3);
                        cout << "\nYour commanders told you not to fight, but you did it anyway." << endl;
                        sleep(3);
                        cout << "\n\nNow you are dead as your army was burned to death by Wildfire." << endl;
                        lives = 0;
                    } else if (final_choice == "Return" || final_choice == "return") {
                        sleep(3);
                        cout << "\nYou have gone with what your commanders recommended you to do. " <<
                             "King Joffrey was killed at his wedding and the new King is weak, he won't ever want to "
                             "attack you in the North." << endl;
                        sleep(5);
                        cout << "\nSome time passes and your brother Jon Snow comes to you about fighting together with "
                                "the Wildlings to defeat the Night King, " <<
                             "but he tells you that for the battle, all the possible support will be needed. "
                             "You refuse to have an alliance with the Lannisters, the people who killed your sister and father." << endl;
                        sleep(5);
                        cout << "\nYou create an alliance with the Queen of Dragons, destroy the Night King, "
                                "and to protect your people from her dragons, you give up your power to become Warden of the North." <<
                             "\n\nThe Queen of Dragons takes the Seven Kingdoms for herself as you live out the rest of "
                             "your life as a Warden." << endl;
                        sleep(2);
                        lives = 0;
                    }
                }
            }

            if (lives <= 0) {
                sleep(5);
                cout << "\n\nGame over! I hope you enjoyed it!!!" << endl;
                exit(0);
            }
        }
    }
};

class IHaveNoEnemies: public Game {
public: void play(const string & playerName) override {

        sleep(5);

        string position;
        int lives;

        int first_special_number = rand() % 100;

        if (first_special_number < 25) {
            position = "peasant";
            lives = 3;
        } else if (first_special_number < 60) {
            position = "Viking";
            lives = 4;
        } else if (first_special_number < 80) {
            position = "Warrior";
            lives = 5;
        } else {
            position = "A true Warrior";
            lives = 7;
        }

        while (lives > 0) {
            cout << "\nWelcome to the world of Vinland Saga!" << endl;

            if (position == "peasant") {
                int second_special_number = rand() % 100;

                cout << "\nThis is a world of Vikings, Warriors, and Kings, but you are a nobody, a peasant." << endl;
                sleep(5);
                cout << "\nNow pick a number from 1 to 100. If you pick a number less than 25 digits away "
                        "from the one I'm thinking about, I will let you live to become a Viking. "
                        "If not, well, you are going to die as you see your village burn "
                        "and your loved ones suffer." << endl;

                int lucky_pick_digit;
                cin >> lucky_pick_digit;

                int difference = abs(first_special_number - second_special_number);

                if (difference < 25) {
                    cout << "\nCorrect! You are now a Viking. Good luck!" << endl;
                    position = "Viking";
                    lives = 4;
                } else {
                    cout << "\nIncorrect! Sorry, but you are now going to die. Your village is being raided by Vikings, "
                            "and your life takes a tragic turn." << endl;
                    lives = 0;
                }
            }

            if (position == "Viking") {
                char Warrior_answer;
                cout << "\nHello " << playerName << ", the Viking. Now, we know how Vikings used to live in the past, right? " <<
                     "You know, by raiding and pillaging. Do you desire to become a Warrior Viking? Yes => Y or No => N. "
                     "It will cost you one life for your training." << endl;
                cin >> Warrior_answer;

                if (Warrior_answer == 'Y' || Warrior_answer == 'y') {
                    position = "Warrior";
                    lives -= 1;
                    cout << "\nYou are now " << playerName << " the " << position << " and you also now have " << lives << " lives." << endl;
                } else {
                    cout << "\nYou have chosen to live as a Viking without becoming a Warrior. "
                            "Your fate is sealed by the events of this world." << endl;
                    lives = 0;
                }
            }

            if (position == "Warrior") {
                char answer;
                cout << "\nHello " << playerName << ", the Warrior. Do you consider yourself a True Warrior? Yes => Y or No => N" << endl;
                cin >> answer;

                if (answer == 'N' || answer == 'n') {
                    cout << "\nYou have chosen a different path, but this path is not free from consequences." << endl;
                    cout << "\nYour actions will define your legacy." << endl;
                    lives = 0;
                } else if (answer == 'Y' || answer == 'y') {
                    string trueWarriorPhrase = "enemies";
                    string answerPhrase;

                    cout << "\n" << playerName << ", as you believe yourself to be a True Warrior, "
                                                  "answer this question: What does a True Warrior not have?" << endl;
                    cin >> answerPhrase;

                    for (auto & x: answerPhrase) {
                        x = tolower(x);
                    }

                    if (trueWarriorPhrase == answerPhrase) {
                        position = "A true Warrior";
                        lives -= 1;
                        cout << "\nCorrect! You are now a " << position << ". Becoming one requires sacrifice, "
                                                                           "and now you will lose one life, having "
                                                                           << lives << " lives remaining." << endl;
                    } else {
                        char trueAnswer;
                        cout << "\nThat is not the answer for becoming a True Warrior. "
                                "Here's another question, which you must answer correctly to become a True Warrior." << endl;
                        sleep(5);
                        cout << "\nDoes a True Warrior need a Sword? Yes => Y or No => N" << endl;
                        cin >> trueAnswer;

                        if (trueAnswer == 'N' || trueAnswer == 'n') {
                            position = "A true Warrior";
                            lives -= 1;
                            cout << "\nCorrect! You are now a " << position << ". Becoming one requires sacrifice, "
                                                                               "and now you will lose one life, having "
                                                                               << lives << " lives remaining." << endl;
                        } else {
                            cout << "\nYour destiny is decided by your choices. "
                                    "Your actions will dictate your path." << endl;
                            lives = 0;
                        }
                    }
                }
            }

            if (position == "A true Warrior") {
                sleep(3);
                cout << "\nWelcome, " << playerName << ", you are a True Warrior. You hold the potential to change "
                                                       "the world for the better. " <<
                     "In this Viking world, there is suffering, war, and injustice. Your mission is to combat these evils, "
                     "shaping a world where all can live secure and content lives, "
                     "a world where no one perceives others as enemies." << endl;
                sleep(8);
                cout << "\nSadly in this is the world of Kings and you weren't born one. You need to go about changing "
                        "the world in a different way." << endl;
                sleep(3);
                cout << "\nYou will change the world by creating a new nation in the country of Vinland, "
                        "a land in a far away place that will uphold true justice." << endl;
                sleep(5);
                cout << "\nNow to see if you can go and create this new nation, you will need money to buy boats to do such a long travel." << endl;
                sleep(3);
                cout << "\nIf you win the following rock-paper-scissors game, you will win the necessary wealth to go to Vinland, "
                        "but if you lose you will die trying to get the money." << endl;
                sleep(3);

                string result;
                RockPaperScissorsGame::play(result);

                if (result == "Tie" || result == "Computer") {
                    cout << "\n\nThe mission has ended up a failure, " << playerName <<
                         ". You have died a True Warrior, but weren't able to collect the funds needed to go to Vinland." << endl;
                    sleep(3);
                    lives = 0;
                } else if (result == "User") {
                    cout << "\n\nThe mission has ended up in victory for the future of humanity, " << playerName <<
                         ". You a True Warrior were able to collect the funds needed to go to Vinland." << endl;
                    sleep(3);
                    cout << "\n" << playerName << ", in the future you make it to Vinland and create a nation based on peace and justice. "
                                                  "You then die of old age as a True Warrior and someone that "
                                                  "has changed the path of humanity forever." << endl;
                    sleep(2);
                    lives = 0;
                }
            }

            if (lives <= 0) {
                sleep(5);
                cout << "\n\nGame over! I hope you enjoyed it!!!" << endl;
                exit(0);
            }
        }
    }
};

class KeepMovingForward: public Game {
public: void play(const string & playerName) override {

        int lives = 0;
        string position;

        int first_special_number = rand() % 100;

        if (first_special_number < 25) {
            position = "peasant";
            lives = 3;
        } else if (first_special_number < 60) {
            position = "Soldier";
            lives = 4;
        } else if (first_special_number < 80) {
            position = "Survey Corps Soldier";
            lives = 5;
        } else {
            position = "Titan shifter";
            lives = 7;
        }

        while (lives > 0) {

            cout << "\nWelcome to the world of Attack on Titan!" << endl;

            if (position == "peasant") {
                cout << "\nWell, " << playerName << ". You are in the world of Attack on Titan. "
                                                    "If you haven't seen this series, all I have to say is that you are now dead, "
                                                    "like most people in the show. "
                                                    "You were born a " << position << " and mindless Titans have eaten you "
                                                                                      "and your family as well, honestly." << endl;
                lives = 0;
            }

            if (position == "Soldier") {
                cout << "\nCongratulations! You were born in a part of this world where mindless Titans didn't eat everyone! "
                        "You were born and became a " << position << ", which means you are able to fight Titans "
                                                                     "or live out your life as a normal Soldier." << endl;

                sleep(5);

                char change;
                cout << "\nBut if you desire, you can become a member of the Survey Corps. Simply answer Yes => Y or No => N" << endl;
                cin >> change;

                if (change == 'Y' || change == 'y') {
                    cout << "\nNice! You have become a member of the Survey Corps and are now fighting to save the world! ";
                    position = "Survey Corps Soldier";
                    cout << "Now you are a " << position << " and have " << lives << " lives." << endl;
                } else if (change == 'N' || change == 'n') {
                    cout << "\nYou lived out your days as a normal soldier and died as a piece of the wall fell on you, "
                            "destroying your body and leaving you to think about your life decision "
                            "of not going out there and saving the world." << endl;
                    lives = 0;
                }
            }

            if (position == "Survey Corps Soldier") {

                string are_you_ready;
                cout << "\nSo you are " << playerName << ", welcome to the Survey Corps, we are the third branch of the military in this kingdom." <<
                     " Our task is to fight the Titans outside the walls, you better be ready to fight or you will face a terrible death." << endl;
                cout << "\nAre you ready to give out your heart and fight to the end to destroy all Titans soldier? Answer me yes or no." << endl;
                cin >> are_you_ready;

                if (are_you_ready == "No" || are_you_ready == "no") {
                    cout << "\nSoldier " << playerName <<
                         ", you get stepped on and killed by the Female Titan in the 57th Exterior Scouting Mission. " <<
                         "Your lack of training and determination ended your career early, "
                         "even though you had the potential to save the world from the Titans." << endl;
                    lives = 0;
                } else if (are_you_ready == "Yes" || are_you_ready == "yes") {
                    cout << "\nGood, now let's begin the real story. Soldier " << playerName <<
                         " with your strong battle IQ and potential you managed to survive all the way to the Return to Shiganshina mission "
                         "to finally see what is in Eren's basement, finding out the truth about Humanity in the Walls." << endl;

                    sleep(5);

                    string funeral;
                    cout << "\n\nA letter arrives from your family, it's your father, "
                            "he has fallen very sickly the past few days and it's believed he is going to die soon. " <<
                         "You have to make the choice of either going to the funeral "
                         "or abandoning the most crucial mission of your life."
                         "\n\nYou may choose now, write Stay or Leave to confirm your decision." << endl;
                    cin >> funeral;

                    if (funeral == "Stay" || funeral == "stay") {
                        cout << "\nSoldier " << playerName << ", you have chosen to obey your duty and continue the mission. " << endl;
                        sleep(3);

                        cout << "\nOne month has passed, you have the reason to believe your father has died, "
                                "but you are still motivated to continue "
                                "as the success of this mission means everything to those around you and humanity as a whole." << endl;
                        sleep(5);

                        string choose_how_to_die;
                        cout << "\nThe battle to retake the Shiganshina district has begun, but you have to decide whether to join " <<
                             "the group fighting the Beast Titan or the group fighting the Colossal and the Armored Titan. " <<
                             "Type Beast or Duo to choose which Titan fight group to join in this battle!" << endl;
                        cin >> choose_how_to_die;

                        if (choose_how_to_die == "Beast" || choose_how_to_die == "beast") {
                            cout << "\nSoldier " << playerName << ", you have chosen to be in Commander Edwin's "
                                                                  "group together with Levi Ackerman. " <<
                                 "After hearing the Commander's magnificent speech you ride your horse with all of "
                                 "your might to attack the Beast Titan." << endl;
                            sleep(3);
                            cout << "\nKnowing well that you were just a distraction so that Levi Ackerman can take down the Titan "
                                    "by getting close to him, you still bravely gave up your life for the future of humanity." << endl;
                            sleep(3);
                            cout << "\nYou know get hit by a rock getting thrown by the Beast Titan, "
                                    "your body gets destroyed by it and you die a hero, giving your heart for humanity's future." << endl;
                            sleep(3);
                            cout << "\nYou have done it soldier, may you enjoy yourself in the afterlife." << endl;
                            sleep(2);
                            lives = 0;
                        } else if (choose_how_to_die == "Duo" || choose_how_to_die == "duo") {

                            cout << "\nYou have chosen to battle the two Titans with Team Eren." << endl;
                            sleep(5);
                            cout << "This will be an unforgiving battle, where a regular soldier like you wouldn't have survived, "
                                    "but I would give you one chance to save your life, "
                                    "if you are able to defeat me in a game of rock-paper-scissors." << endl;
                            sleep(5);

                            string result;
                            RockPaperScissorsGame::play(result);

                            if (result == "Tie" || result == "Computer") {
                                cout << "\n\nThe mission has ended up a failure, the Marley Titans have achieved victory, "
                                        "killed our Titan shifters and super soldiers, the Ackerman." << endl;
                                sleep(3);
                                cout << "The kingdom of Eldia, your homeland now has been overtaken by Marley "
                                        "forces that murder everyone on the island." << endl;
                                lives = 0;
                            } else if (result == "User") {
                                cout << "\n\nCongratulations, the mission was what you will call a success, but almost everyone died. " <<
                                     "The truth about the outside world is learned; what everyone thought was humanity "
                                     "was just an island with three giant walls. " <<
                                     "The world was huge all alone, but we just didn't know it." << endl;
                                sleep(5);
                                cout << "\nAfter the battle, you lose your left arm and eye after getting hit by the Armored Titan. "
                                << playerName <<
                                     ", you live out as a civilian for the following events of your life " <<
                                     "and die a happy death with your family at your side.\nGood job, soldier, you accomplished much in life." <<
                                     endl;
                                lives = 0;
                            }
                        }
                    } else if (funeral == "Leave" || funeral == "leave") {

                        cout << "\nYou leave the mission, your Commander Edwin lets you go as he needs people "
                                "that are all in for the mission's success. You ride your horse to your hometown, "
                                "you have managed to see your father one last time before he died." << endl;
                        sleep(5);

                        string result;
                        RockPaperScissorsGame::play(result);

                        if (result == "Tie" || result == "Computer") {
                            cout << "\n\nThe mission has ended up a failure, Marley has achieved victory, "
                                    "killed our Titan shifters and super soldiers, the Ackerman." << endl;
                            sleep(3);
                            cout << "The kingdom of Eldia, your homeland now has been overtaken by Marley "
                                    "forces that murder everyone on the island." << endl;
                            lives = 0;
                        } else if (result == "User") {
                            cout << "\n\nCongratulations, the mission was what you will call a success, but almost everyone died. " <<
                                 "The truth about the outside world is learned; what everyone thought was humanity "
                                 "was just an island with three giant walls. " <<
                                 "The world was huge all alone, but we just didn't know it." << endl;
                            sleep(5);
                            cout << "\nAlthough Commander Edwin let you go to visit your dying father, "
                                    "the other members of the high ranks of the military didn't see it that way – you coward. " <<
                                 "Your military rank is taken from you. " << playerName <<
                                 ", you live out as a civilian for the following events of your life " <<
                                 "and die a happy death with your family at your side.\nGood job, soldier, you accomplished much in life." <<
                                 endl;
                            lives = 0;
                        }
                    }
                }
            }

            if (position == "Titan shifter") {
                string birth_place;
                cout << "\nYou are a " << position << " in this world. You have the option of being born on Paradis Island or in Marley. " <<
                     "You may choose, but I do have to say the story will be drastically different depending on your choice. " <<
                     "Simply type either Eldia or Marley to choose your destiny." << endl;
                cin >> birth_place;

                if (birth_place == "Eldia" || birth_place == "eldia") {
                    sleep(3);
                    cout << "\nYou have been born in the Kingdom of Eldia." << endl;
                    sleep(3);
                    cout << "\nYou are the Attack Titan. After overcoming many challenges and defeating the Beast, Colossal, "
                            "and Armored Titans to retake your home district of Shiganshina, "
                            "you have gone down to your family's basement and found the truth about how the world really is." << endl;
                    sleep(5);
                    cout << "\nYou live on an island called Paradis, and the rest of the world hates your kind and wants "
                            "to KILL YOU ALL for being able to turn into Titans." << endl;
                    sleep(3);
                    cout << "\n" + playerName + ", you have also found out that you have an older brother, "
                                                "who was the Beast Titan called Zeke." << endl;
                    sleep(3);
                    cout << "\n" + playerName + ", you now have a choice to make in this story. With your knowledge that the outside world hates "
                                                "the people from your nation island and want them all to die.\n\nYou could either "
                                                "join Zeke's Euthanasia plan "
                                                "or you could murder everyone outside of your nation that hates you to protect your "
                                                "friends using your Titan powers." << endl;
                    sleep(7);

                    string liberation;
                    cout << "\n\nNow you have to choose; type Zeke to follow his plan or Rumbling to murder the whole planet for the "
                            "protection of your nation, family, and friends." << endl;
                    cin >> liberation;

                    if (liberation == "Zeke" || liberation == "zeke") {
                        sleep(3);
                        cout << "\n" << playerName << ", you have chosen to follow Zeke's plan." << endl;
                        sleep(3);
                        cout << "\nNow no one that can transform into Titans will be able to have children so the race will die in about 100 years, "
                                "but to be able to have peace during that time you do a small Rumbling with hundreds of Colossal Titans "
                                "and murder millions of people." << endl;
                        sleep(3);
                        cout << "\nYou peacefully die years later, knowing the world has gotten rid of Titans forever." << endl;
                        sleep(2);
                        lives = 0;
                    } else if (liberation == "Rumbling" || liberation == "rumbling") {
                        sleep(3);
                        cout << "\n" << playerName << ", you have chosen to do the Rumbling. This will require that you "
                                                      "take all of the Colossal Titans "
                                                      "inside the walls and walk them through the whole planet murdering EVERYONE in your path."
                                                      << endl;
                        sleep(3);
                        cout << "\nThis will make you the Devil that destroyed the planet to the outside world, but the hero "
                                "who saved everyone to the people of Paradis." << endl;
                        sleep(3);
                        cout << "\nYou will have to take this burden upon yourself and stop your friends from getting to you "
                                "before you decide to save them as the world only gave you this option to choose." << endl;
                        sleep(2);
                        lives = 0;
                    }
                }

                if (birth_place == "Marley" || birth_place == "marley") {
                    sleep(3);
                    cout << "\n" << playerName << ", you were born in the nation of Marley and become the Armored Titan, "
                                                  "you were send on a mission to go to Paradise Island to retake the Founding Titan." << endl;
                    sleep(4);
                    cout << "\nYou had to flee after loosing the battle at the Shiganshina district, "
                            "years later you are now fighting with the people of Paradise to defeat Eren, "
                            "who right now is committing the Rumbling killing millions by the hour." << endl;
                    sleep(5);
                    cout << "\n" << playerName << ", you have lost hope. Eren is right now going to kill family "
                                                  "with his thousands of Colossal Titans, so how are you even going to defeat him..." << endl;
                    sleep(3);
                    string give_up;
                    cout << "\n\nWell are you going to give up? Type Yes or Never" << endl;
                    cin >> give_up;
                    if (give_up == "Never" || give_up == "never") {
                        cout << "\n" << playerName << ", you have chosen to never give up, the upcoming battle may kill you, "
                                                      "but here you are ready to take the man with the power to kill everyone on earth." << endl;
                        sleep(3);
                        cout << "\nYou form a team with Mikasa, Armin, and the others to stop Eren. When you get close to him in his giant "
                                "Founding Titan form, you see that the only way to defeat him is to have Armin use his Colossal Titan powers "
                                "to blow up like a nuke, but Mikasa still wants to save Eren." << endl;
                        sleep(6);
                        cout << "\nAfter Mikasa talks to Eren, she realizes that this was the only way for him to protect his friends "
                                "from the outside world that wanted them all to die, including your people." << endl;
                        sleep(4);
                        cout << "\nArmin finishes the job, blowing Eren up and killing him." << endl;
                        sleep(3);
                        cout << "\n" << playerName << ", you will be remembered as the Brave Hero that stopped "
                                                      "Eren the devil that murdered 80% of the world's population." << endl;
                        sleep(2);
                        lives = 0;
                    }

                    if (give_up == "Yes" || give_up == "yes") {
                        cout << "\nWell just die along with your family then." << endl;
                        lives = 0;
                    }
                }
            }

            if (lives <= 0) {
                sleep(5);
                cout << "\n\nGame over! I hope you enjoyed it!!!" << endl;
                exit(0);
            }
        }
    }
};

int main() {

    srand(time(NULL));
    string name;

    cout << "\nHello, Adventurer! May I ask for your name?" << endl;
    cin >> name;

    cout << "\nWell " << name << ", this is a random choose your own adventure game " <<
         "taking inspirations from some of my favorite shows." << endl;

    sleep(3);

    cout << "\nNow you have the opportunity to choose which of the 3 worlds I have created you would like to play in. " <<
         "I must warn you that you might not be able to save them even though it may be your duty. " <<
         "Simply enter the number of your preferred world based on its famous phrase." << endl;

    sleep(3);

    int worldNumber;
    cout << "\n1. Winter is Coming\n"
            "2. I have no enemies\n"
            "3. I will Just Keep Moving Forward... Until I have Killed My Enemies." << endl;
    cin >> worldNumber;

    cout << "\nGreat choice, dear " << name << ". I hope you survive and save your world." << endl;

    Game * selectedGame;

    if (worldNumber == 1) {
        selectedGame = new WinterIsComing();
    } else if (worldNumber == 2) {
        selectedGame = new IHaveNoEnemies();
    } else {
        selectedGame = new KeepMovingForward();
    }

    selectedGame -> play(name);

    delete selectedGame;

    return 0;
}
