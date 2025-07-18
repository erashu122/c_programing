import random

def play_game():
    choices = ["rock", "paper", "scissors"]
    computer_choice = random.choice(choices)
    
    while True:
        user_choice = input("Choose rock, paper, or scissors: ").lower()
        if user_choice not in choices:
            print("Invalid choice. Please try again.")
            continue
        
        print("You chose", user_choice + ".")
        print("The computer chose", computer_choice + ".")
        
        if user_choice == computer_choice:
            print("It's a tie!")
        elif user_choice == "rock" and computer_choice == "scissors" or \
             user_choice == "paper" and computer_choice == "rock" or \
             user_choice == "scissors" and computer_choice == "paper":
            print("Congratulations, you win!")
        else:
            print("Sorry, you lose.")
        
        play_again = input("Play again? (y/n): ")
        if play_again.lower() != "y":
            break

