#Alphabet_Master_Game

#imported time module
import time

print("Welcome to the alphabet master game.")

print("You have to type the whole alphabet in the correct order as fast as you can.\nTry to finish typing within minimum time by practisicing.\nNote: No need to keep space between letters.\nGood Luck !")

print("\nAre your ready to play the game ? \n\t 01) Yes. Take me to the game.\n\t 02) No. Exit from the game.")

#take the input
inp = input()

#Starting the game
if inp=="1":

    t0= time.time()
    inp = input("Start typing... : ")
    t1 = time.time() - t0

    #test whether the input eqauls to the alphabhat
    if inp =="ABCDEFGHIJKLMNOPQRSTUVWXYZ" or inp == "abcdefghijklmnopqrstuvwxyz":
        print("congratulations ! You took ", t1 , " time to type the whole alphabhat.")
    else:
        print("Oops ! You got a mistake. Try again.")

#exit from the program             
elif inp=="2":
    quit()

else:
    print("Invalid input !")
