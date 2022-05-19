#include <iostream>
#include <cstring>

using namespace std;

class Review {

private:
	int ReviewID;
	float Rating;
	Customer* cus;
public:
	Review();//default constructor
	Review(int Rev_id, float pRa);
	void addCustomer(Customer* pcus);
	int getReviewID();
	float getRating();
	void displayRevDetails();
	~Review();
};
