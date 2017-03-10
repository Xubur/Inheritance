#include <iostream>
#include <string>
#include "Email.h"
#include "File.h"
#include "Document.h"

bool ContainsKeyword(const Document& docObject, std::string keyword);
int main(void) {
	Email newEmail = Email("Dear Professor,\n\t Inheritance is cool but not as cool as escape sequences!"
		"\n I like coding but I'd like to get into networking as that's my major."
		"\n I guess I'll have to wait until my 4 year college. :("
		"\n\t -TheCoder \n");
	newEmail.print_obj();

	if (ContainsKeyword(newEmail, "Coder"))
		std::cout << "Found it!" << std::endl;

	/*Email assignTestEmail = Email(); // Creates a new Email with default params.
	newEmail = assignTestEmail; // assign the first to the second's data
	std::cout << "newEmail: "; newEmail.print_obj();
	std::cout << "\n assignTestEmail : "; assignTestEmail.print_obj();*/

	/*Email copyTestEmail;
	copyTestEmail = newEmail;

	copyTestEmail.print_obj();*/

	// I could create more objects to test but everything was implemented practically the same way and to do any more would be
	// redundant in my opinion. I can add more if you want more.

}

bool ContainsKeyword(const Document& docObject, std::string keyword)
{
	if (docObject.getText().find(keyword) != std::string::npos)
		std::cout << ".find result: " << docObject.getText().find(keyword) << std::endl;
		return true;
	return false;
}