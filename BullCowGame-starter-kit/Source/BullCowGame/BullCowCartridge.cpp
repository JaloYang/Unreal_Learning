// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    //Welcoming The Player
    PrintLine(TEXT("Welcome to this game!"));
    PrintLine(TEXT("Guess the 4 letter word!")); //Magic Number Remove!
    PrintLine(TEXT("Please enter anything you like:"));
    
    //Setting Up Game
    SetupGame();

    //Set Lives
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    PrintLine(Input);

    HiddenWord.Len();
    if(HiddenWord.Len() != Input.Len())
    {
        PrintLine(TEXT("The Length is not right"));
    }

    //Checking Player Guess
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("You Win!"));
    }
    else
    {
        PrintLine(TEXT("You Lost! Try again! Never Give up"));
    }

    //Check If Isogram

    //Check Right Number of Characters

    //Remove Life

    //Check If Lives > 0 

    //If Yes Guess Again

    //Show Lives Left

    //If No Show GameOver and HiddenWord

    //Prompt To Play Again, Press Enter to Play Again?

    //Check User Input

    //PlayAgain Or Quit
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cake"); //Set the HiddenWord
    Lives = 4;
}