from main_bot import *

print("Hello, I am a Movie bot\n"
      "I can give you information related to movies\n"
      "such as I can show you latest movies or top movies")


def question():
    user = input("what would you like to know?\n"
                 ">")
    choose_api(user, user)
    while True:
        user_2 = input("\nWould you like to know something else\n"
                       ">")
        lower_words = user_2.lower()
        list_words = lower_words.split(" ")
        if list_words[0] == "no" or list_words[0] == "bye":
            break
        else:
            choose_api(user_2, user_2)
    print("Bye!")


question()
