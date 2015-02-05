#if !defined PASSWORD_H
#define PASSWORD_H

#include "Text.h"
#include "ListArray.h"
using CSC2110::String;
using CSC2110::ListArray;
using CSC2110::ListArrayIterator;

class Password
{
private:
	ListArray<String>* viable_words;  //the list of words that can still be the password
	ListArray<String>* all_words;  //the original list of words
	int len;  //the length of the first word entered is stored to check that all subsequent words have the same length

	//a private helper method to report the number of character matches between two Strings
	int getNumMatches(String* curr_word, String* word_guess);

public:
	Password(); //constructor
	~Password(); //destructor
	void addWord(String* word); //add word to password list
	
	//index of guessed password, # of matches and passwords left
	void guess(int try_password, int num_matches);
	int getNumberOfPasswordsLeft(); //possible passwords left
	void displayViableWords(); //current list of possibles
	int bestGuess(); //best word to guess
	String* getOriginalWord(int index); //get word from list of originals

};

#endif
