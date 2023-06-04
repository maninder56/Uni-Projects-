from story import *  # parts of the story stored in variables

def starter():
    while True:
        play = input("Welcome to the Bank Robbery \n"
                     "<p> to play \n"
                     "<e> to exit").lower()
        if play == "p":
            break
        elif play == "e":
            print("End of story")
            quit()

    print("\n"
          "\tAs the biggest heist of his life appeared over the horizon,\n"
          "Mark was yet to gather his crew of computer geniuses. As they\n"
          "were planning to rob a bank, he would need someone to remotely\n"
          "disable the camera, someone to also remotely disable the alarm\n"
          "and someone to open the safety vaults.\n"
          "\n"
          "\tMark was not willing to settle for anything less than the best,\n"
          "so he decided to contact an old friend with several contacts in\n"
          "this area. He was given 3 names, Chris, Ray and LP. These were the\n"
          "best IT geniuses around; however, they"
          "would take a hefty 10% of the\n"
          "cut each.\n"
          
          "\n"
          "<Chris>\n"
          "\n"
          "<Ray> \n"
          "\n"
          "<LP>  \n"
          "\n"
          "<c> to Continue ")


    while True:
        enter = input("").lower()
        if enter == "c":
            break
        elif enter == "chris":
            chris(1)
        elif enter == "ray":
            ray(1)
        elif enter == "lp":
            lp(1)
        else:
            print("I don't understand, Please enter again:")

    print("\tThe crew was assembled, just one piece of the puzzle left to\n"
          "solve, and that was the getaway car, they wanted something small,\n"
          "quick, but covert and un-suspicious. Each gave their own suggestions,\n"
          "and in the end, they decided on:\n"
          "\n"
          "<a>an old Ford Transit van\n"
          "\n"
          "<b>an old army style Range-Rover\n"
          "\n"
          "<c> to Continue")

    while True:
        enter = input("").lower()
        if enter == "a":
            van()
        elif enter == "b":
            range_rover()
        elif enter == "c":
            break
        else:
            print("I don't understand, Please enter again:")

    print(paragraph7)
    print('\n'
          '<a> small banks\n'
          "\n"
          '<b> bigger plan\n'
          "\n"
          '<c> to Continue')

    while True:
        enter = input("").lower()
        if enter == "a":
            print(paragraph8)
        elif enter == "b":
            print(paragraph9)
        elif enter == "c":
            break
        else:
            print("I don't understand, Please enter again:")

    print(paragraph10)
    print("\n"
          "<plan> for further detailsc"
          "\n"
          "\n"
          "<c> to continue")

    while True:
        enter = input("").lower()
        if enter == "plan":
            print(paragraph12)
            print("\n"
                  "<a> for details of the special place\n"
                  "\n"
                  "<c> to continue")
            while True:
                enter = input("").lower()
                if enter == "a":
                    print(paragraph_special_place)
                    print("<c> to continue")
                elif enter == "c":
                    # x = True
                    break
                else:
                    print("I don't understand, Please enter again:")
        #            if x:
        #                break
        elif enter == "c":
            break
        else:
            print("I don't understand, Please enter again:")

    print(paragraph14)
    print("<n> Next")

    while True:
        enter = input("").lower()
        #        enter = input("Press any key to continue").lower()
        if enter == "n":
            break
        else:
            print("I don't understand, Please enter again:")

    print(paragraph15)
    print("<a> To start attack\n"
          "\n"
          "<b> what is spear-phishing")

    while True:
        enter = input("").lower()
        if enter == "a":
            break
        elif enter == "b":
            print(paragraph16)
            print("<c> to Continue")
            while True:
                enter = input("").lower()
                if enter == "c":
                    break
                else:
                    print("I don't understand, Please enter again:")
        else:
            print("I don't understand, Please enter again:")

    print(paragraph17)
    print("<n> Next")

    while True:
        enter = input("").lower()
        if enter == "n":
            break
        else:
            print("I don't understand, Please enter again:")

    print(paragraph18)
    print("<n> Next")

    while True:
        enter = input("").lower()
        if enter == "n":
            break
        else:
            print("I don't understand, Please enter again:")

    print(paragraph19)
    print(paragraph20)
    print("\n"
          "Find out what happened to:"
          "\n"
          "Mark\n"
          "Chris\n"
          "Ray\n"
          "Ray's friend\n"
          "LP\n"
          "\n"
          "<c> to Continue")

    while True:
        enter = input("").lower()
        if enter == "c":
            break
        elif enter == "mark":
            mark()
        elif enter == "chris":
            chris(2)
        elif enter == "ray":
            ray(2)
        elif enter == "ray's friend":
            ray_friend()
        elif enter == "lp":
            lp(2)
        else:
            print("I don't understand, Please enter again:")

    print("Sometimes I wonder, what would life be like if hacking was as easy as it seemed\n"
          "\n"
          "\n"
          "The end")


def chris(n):
    if n == 1:
        print("\t Chris was experienced in disabling CCTV cameras, from his\n"
              "days of small-time shop robbing. He initially turned to\n"
              "robbing after his father had turned severely ill. As he\n"
              "needed money to support his father's medical needs and\n"
              "special food requirements. "
              "\n"
              "His father's complications would\n"
              "often require Chris to pay for any surgical costs. After\n"
              "turning bankrupt to support his elderly father, he saw\n"
              "criminality as a way of gaining quick money, regardless\n"
              "of the risk.")

    elif n == 2:
        print("\t Chris continued with his small-time shop robbing. Just\n"
              "for fun. He loved hacking and he wouldn't give up on it.\n"
              "His love for hacking also became fatal to him. He got\n"
              "caught one day, and he was sentenced to life imprisonment. ")


def ray(n):
    if n == 1:
        print("\t Ray was born in a small village. He is different to others,\n"
              "he has a gift, but in his village, people disrespect him and\n"
              "treat him as freak. So Ray decides to take revenge. Ray was\n"
              "recognised by people in this game, as one of the best around.\n"
              "He can disable almost every type of alarm, no matter how\n"
              "sophisticated within minutes, and this is a crucial asset\n"
              "when planning such an important job.")
    elif n == 2:
        print("\t Ray was satisfied with his last robbery, and he didn't want\n"
              "to risk getting caught in the future. He was already tired\n"
              "of all the robberies. Somehow, he started feeling guilty\n"
              "and turned to God. He has lived his life peacefully ever\n"
              "since. He even donated his money to charity.")


def lp(n):
    if n == 1:
        print("\t LP had arguably the most important job, in disabling phone\n"
              "lines, as this would stop the connection between the bank and\n"
              "the police, allowing them to be in and out within seconds\n"
              "without interruption from the police\n"
              "\n"
              "He was an expert in working with phone lines as his previous\n"
              "job was, working with a big phone company. Involving him fixing\n"
              "any lines that were cut off. He enjoyed his work, and he was\n"
              "voted as one of the best employees that company had.\n"
              "\n "
              "At the beginning of his career, he was quickly promoted to higher\n"
              "ranks but certain people in the company didn't like it,\n"
              "they were jealous of his success. They accused him of\n"
              "false accusation which he was unable to prove wrong.\n"
              "\n"
              "This was the turning point of his life as he tried to\n"
              "get a job, but no company was hiring him. Which resulted\n"
              "him in getting involved with many illegal jobs. He quickly\n"
              "started accepting any small jobs that were offered. As the\n"
              "time passed, the risk of his job increased. Leading him into\n"
              "becoming the person we know today...")
    elif n == 2:
        print("LP‘s fate most likely resembled Mark’s because nobody has \n"
              "ever heard of him again. Rumours say that he moved to the \n"
              "Philippines, but who knows...")


def mark():
    print("\t Mark moved to Thailand to start a new life. He changed his \n"
          "name to hide his past, he stayed low and he never spend high \n"
          "amount of money as he didn't want attracting any attention he \n"
          "never needed to steal again! ")


def ray_friend():
    print("\t Ray’s old friend H also moved abroad, but very soon he was \n"
          "diagnosed with cancer. It was in an advanced stage and no \n"
          "one could help him. As if he didn't deserve it…")


def van():
    print("\t Not what you would expect, however it was covert, and not what \n"
          "you would expect from a team of high-flying bank robbers, as well \n"
          "as having enough storage for all the stolen goods!"
          "\n"
          " The team was assembled, the base was set up with state-of-the-art computers, \n"
          "everything was moving smoothly, and without any hiccups so far."
          "\n"
          "<c> to continue"
          "\n")

def range_rover():
    print("\t Choosing the camo wrapped Range Rover, would most likely attract \n"
          "a lot of attention! But would provide the speed, storage space and \n"
          "stealth that a get-away vehicle needs.\n"
          "\n"
          " It isn't as covert as the transit van, but makes up for it with its "
          "heavily tinted windows and bullet proof body panels."
          "\n"
          " The team had been assembled and the base of operations \n "
          "was modified with state of the art computers. \n"
          "\n"
          "So far, everything was moving smoothly. No hiccups yet ! \n"
          "\n"
          "<c> to continue"
          "\n"
          "\n")


starter()


