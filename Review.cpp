#include <iostream>
#include <cstring>
using namespace std;

Review::Review() {

	cout << "This is the Review constructor." << endl;
}
Review::Review(int Rev_id, float pRa)
{
	ReviewID = Rev_id;
	Rating = pRa;
}
void Review::addCustomer(Customer* pcus)
{
	cus = pcus;
}
int Review::getReviewID()
{
	return ReviewID;
}
float Review::getRating()
{
	return Rating;
}
void Review::displayRevDetails()
{
	cout << "Review ID: " << ReviewID << endl;
	cout << "Rating : " << Rating << endl;
}
Review::~Review()
{
	cout << "Deleting Review " <<ReviewID <<endl;
}

