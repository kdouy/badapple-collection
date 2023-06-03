import os, time
import pygame

pygame.init()

fin = open("./init.txt", "r", encoding = "ISO-8859-1")
badapple = fin.read()

audio = pygame.mixer.Sound('./data.mp3')

audio.play()

for x in badapple.split("SPLIT"):
    print(x)
    time.sleep(0.07)
    os.system("cls")

fin.close()