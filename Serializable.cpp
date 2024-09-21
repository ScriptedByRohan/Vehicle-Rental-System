/* any class which is derived from this class can be converted to string */
#include<string>
using namespace std;
/* This is a serializable class and it is an abstract class. Any class derived from this class must implement 'to string ' method */

class serializable {
    public:
    virtual string tostring() const = 0;
};