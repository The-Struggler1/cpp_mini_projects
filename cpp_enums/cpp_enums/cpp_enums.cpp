
#include <iostream>
using namespace std;

enum encolor {red,green,blue};
enum engender {Male,Female};
enum ensocialstatus {married,single};

struct staddress {

    string PObox;
    string streetname;
    string zipcode;
    string Buildingnum;

};
struct stcontactinfo {

    string Phonenum;
    string Email;
    staddress Address;
};
struct stperson {

    string firstname;
    string lastname;
    engender Gender;
    encolor favoritecolor;
    ensocialstatus maritalstatus;
    stcontactinfo contactinfo;
    staddress Addressinfo;
};
int main()
{
    stperson Person1;

    Person1.firstname = "Omar";
    Person1.lastname = "Hamdan";
    Person1.Gender = engender::Male;
    Person1.maritalstatus = ensocialstatus::single;
    Person1.contactinfo.Email = "xyz@gmail.com";
    Person1.contactinfo.Phonenum = "121132323232";
    Person1.contactinfo.Address.Buildingnum = "6";
    Person1.contactinfo.Address.PObox = "2343";
    Person1.contactinfo.Address.streetname = "abdullah ghosheh";
    Person1.contactinfo.Address.zipcode = "323232";


    cout << Person1.firstname << endl << Person1.lastname << endl << Person1.Gender << endl << Person1.maritalstatus << endl << Person1.contactinfo.Email << endl;
    cout << Person1.contactinfo.Phonenum << endl << Person1.contactinfo.Address.Buildingnum << endl << Person1.contactinfo.Address.PObox << endl << Person1.contactinfo.Address.streetname << endl;







}

