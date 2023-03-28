
import random
import time

print("Hi, welcome to the game")
time.sleep(3)
print("Choose a number between 1 and 100")

guess= int(input("What is your guess?"))
correctnumber = random.randint(1,100)
guesscount =1     

while guess != correctnumber:
  guesscount += 1 
  if guess < correctnumber:
    guess = int(input("Higher"))
  else:
    guess = int(input("Lower"))

print(f"The right answer was {correctnumber}, it took {guesscount} attempts")
