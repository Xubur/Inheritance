#include <iostream>
#include <string>
#include "Email.cpp"

int main(void) {
	Email newEmail = Email();

	std::cout << "Email:"
		<< "\n To: " << newEmail.getRecipient()
		<< "\n From: " << newEmail.getSender()
		<< "\n Title: " << newEmail.getTitle()
		<< "\n \t " << newEmail.getText()
		<< std::endl; 

}