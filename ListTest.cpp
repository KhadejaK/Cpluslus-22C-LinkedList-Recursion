/**************************************************************
 * Khadeja Khalid and Tiffany Tran
 * CIS 22C Lab 4: Recursion
 *************************************************************/

#include <iostream>
#include <string>
#include "List.h"


using namespace std;

int main()
{
	List<int> iL;     //List containing ints
	List<int> iiL;    //List containing values 0 1 2 3
	List<int> iiiL;   //List containing values 3 2 1 0
	List<int> eL;     //Empty int list
	List<string> sL;  //List containing strings
	List<string> ssL;

	cout << "*************** Testing insertFirst *****************\n";

	cout << " Testing int:\n";
	cout << "Should print out nothing: ";
	iL.printList();

    iL.insertFirst(1);
    cout << "Should print out 1: ";
    iL.printList();

    iL.insertFirst(0);
    cout << "Should print out 0 1: ";
    iL.printList();

    cout << "\n Testing string: \n";
    sL.insertFirst("b");
    cout << "Should print out b: ";
    sL.printList();

    sL.insertFirst("a");
    cout << "Should print out a b: ";
    sL.printList();

    cout << endl << endl;

    cout << "*************** Testing insertLast ******************\n";

	cout << " Testing int:\n";
    iL.insertLast(2);
    cout << "Should print out 0 1 2: ";
    iL.printList();

    iL.insertLast(3);
    cout << "Should print out 0 1 2 3: ";
    iL.printList();

    cout << "\n Testing string: \n";
    sL.insertLast("c");
    cout << "Should print out a b c: ";
    sL.printList();

    sL.insertLast("d");
    cout << "Should print out a b c d: ";
    sL.printList();

    cout << endl << endl;

    cout << "*************** Testing getFirst ********************\n";

    cout << " Testing int:\n";
    cout << "Should print out 0: ";
    cout << iL.getFirst() << endl;

    cout << "\n Testing string: \n";
    cout << "Should print out a: ";
    cout << sL.getFirst() << endl;

    //eL.getFirst(); //Testing assert

    cout << endl << endl;

    cout << "*************** Testing getLast **********************\n";

    cout << " Testing int:\n";
    cout << "Should print out 3: ";
    cout << iL.getLast() << endl;

    cout << "\n Testing string: \n";
    cout << "Should print out d: ";
    cout << sL.getLast() << endl;

    //eL.getLast(); //Testing assert

    cout << endl << endl;

    cout << "*************** Testing getLength ********************\n";

    cout << "Should print out 4: ";
    cout << iL.getLength() << endl;
    cout << endl;

    cout << "Should print out 4: ";
    cout << sL.getLength() << endl;

    cout << "Should print out 0: ";
    cout << eL.getLength() << endl;

    cout << endl << endl;

    cout << "*************** Testing isEmpty *********************\n";

    cout << "List should be empty: ";
    if (eL.isEmpty())
    	cout << "List is empty!\n";
    else
    	cout << "List is not empty!\n";

    cout << endl;

    cout << "List should not be empty: ";
    if (iL.isEmpty())
    	cout << "List is empty!\n";
    else
    	cout << "List is not empty!\n";

    cout << endl << endl;

    cout << "*************** Testing Operator ==: *****************\n";
    cout << "List should not be equal: ";
    if(iL==eL)
          cout << "Lists are equal!\n";
    else
          cout << "Lists are unequal!\n";

    //Inserting the the values 0 1 2 3 into iiL for an equal list
    for (int i = 3; i >= 0; i--)
        {
            iiL.insertFirst(i);
        }

    cout << endl;

    cout << "List should be equal: ";
    if(iL==iiL)
          cout << "Lists are equal!\n";
    else
          cout << "Lists are unequal!\n";

    cout << endl;

    cout << "*************** Testing isSorted ***********************\n";
    cout << "List should be sorted: ";
    if(iL.isSorted())
          cout << "List is sorted!\n";
    else
          cout << "List is not sorted!\n";
    cout << endl;

    //Inserting the the values 3 2 1 0 into iiiL for a reverse list
    for (int i = 0; i <= 3; i++)
        {
            iiiL.insertFirst(i);
        }

    cout << "List should not be sorted: ";
    if(iiiL.isSorted())
          cout << "List is sorted!\n";
    else
          cout << "List is not sorted!\n";
    cout << endl;

    //Testing empty list
    cout << "List should be sorted: ";
    if(eL.isSorted())
    	cout << "List is sorted!\n";
    else
    	cout << "List is not sorted!\n";


    cout << endl << endl;

    iL.startIterator();
    sL.startIterator();
    cout << "*************** Testing insertIterator ****************\n";

    cout << " Testing int:\n";
    cout << "Should print out 0 4 1 2 3: ";
    iL.insertIterator(4);
    iL.printList();

    cout << "\n Testing string: \n";
    cout << "Should print out a e b c d: ";
    sL.insertIterator("e");
    sL.printList();

    //eL.insertIterator(2); //Testing assert

    cout << endl << endl;

    cout << "*************** Testing advanceIterator & getIterator****\n";

    cout << " Testing int:\n";
    cout << "Should print out 0 4 1 2 3: ";
    iL.advanceIterator();
    iL.printList();
    cout << "Iterator should be 4: " << iL.getIterator() << endl;

    cout << "\n Testing string: \n";
    cout << "Should print out a e b c d: ";
    sL.advanceIterator();
    sL.printList();
    cout << "Iterator should be e: " << sL.getIterator() << endl;

    //eL.advanceIterator(); //Testing assert
    //eL.getIterator();     //Testing assert

    cout << endl << endl;

    cout << "*************** Testing getIndex ***********************\n";
    cout << " Testing int:\n";
    cout << "Should print out 2: "; //Because iterator is in 2nd place
    cout << iL.getIndex() << endl;

    cout << "\n Testing string: \n";
    cout << "Should print out 2: "; //Because iterator is in 2nd place
    cout << sL.getIndex() << endl;

    //eL.getIndex(); //Testing assert

    cout << endl << endl;

    cout << "*************** Testing advanceToIndex ******************\n";
    cout << " Testing int:\n";
    cout << "Should print out 5: ";
    iL.advanceToIndex(5);
    cout << iL.getIndex() << endl;
    iL.advanceToIndex(3);            //Put back at 3 for other functions

    cout << "\n Testing string: \n";
    cout << "Should print out 4: ";
    sL.advanceToIndex(4);
    cout << sL.getIndex() << endl;
    sL.advanceToIndex(3);            //Put back at 3 for other functions

    //eL.advanceToIndex(2); //Testing assert(!isEmpty())
    //sL.advanceToIndex(6); //testing assert(index <= length)

    cout << endl << endl;

    cout << "*************** Testing linearSearch ********************\n";
    cout << " Testing int:\n";
    cout << "Should print out 5: ";
    cout << iL.linearSearch(3) << endl;    //0 4 1 2 3

    cout << "\nShould print out -1: ";
    cout << iL.linearSearch(5) << endl;    //0 4 1 2 3

    cout << "\n Testing string: \n";
    cout << "Should print out 4: ";
    cout << sL.linearSearch("c") << endl;  //a e b c d

    //eL.linearSearch(2); //Testing assert

    cout << endl << endl;

    cout << "*************** Testing binarySearch ********************\n";

    /* 					CURRENT STATE OF LISTS:
	 * iL:   0 4 1 2 3			iterator = 1		index = 3
	 * iiL:  0 1 2 3			iterator = NULL		index = /
	 * iiiL: 3 2 1 0			iterator = NULL		index = /
	 * eL:						iterator = NULL		index = /
	 * sL:   a e b c d			iterator = b		index = 3
	 * ssL:						iterator = NULL		index = /
	 *
	 */

    cout << " Testing int:\n";

    iiL.startIterator();
    // iiL:  0 1 2 3			iterator = 0		index = 1
    cout << "Iterator should be at 0: " << iiL.getIterator() << endl;

    cout << "Should print out 1: ";
    cout << iiL.binarySearch(0) << endl; //0 1 2 3

    cout << "Should print out 2: ";
    cout << iiL.binarySearch(1) << endl;

    cout << "Should print out 3: ";
    cout << iiL.binarySearch(2) << endl;

    cout << "Should print out 4: ";
    cout << iiL.binarySearch(3) << endl;

    // testing for a list with an odd number of elements:
    iiL.insertLast(4);
    // iiL:  0 1 2 3 4			iterator = 0		index = 1

    cout << "Should print out 5: ";
    cout << iiL.binarySearch(4) << endl;

    cout << "Iterator should still be at 0: " << iiL.getIterator() << endl;

    cout << endl;


    //Making a sorted list with iterator(string)
    ssL.insertFirst("d");    //Insert d, d
    ssL.insertFirst("c");    //Insert c, c d
    ssL.insertFirst("a");    //Insert a, a c d
    ssL.startIterator();
    ssL.insertIterator("b"); //Insert b, a b c d
    ssL.advanceIterator();

    cout << "Iterator should be at b: " << ssL.getIterator() << endl;

    cout << " Testing string:\n";
    cout << "Should print out 1: ";
    cout << ssL.binarySearch("a") << endl; //a b c d

    cout << "Should print out 2: ";
    cout << ssL.binarySearch("b") << endl;

    cout << "Should print out 3: ";
    cout << ssL.binarySearch("c") << endl;

    cout << "Should print out 4: ";
    cout << ssL.binarySearch("d") << endl;

    cout << "Iterator should still be at b: " << ssL.getIterator() << endl;

    //eL.binarySearch(2); //Testing assert
    //iL.binarySearch(2); //Testing assert

    cout << endl << endl;

    cout << "*************** Testing reverseIterator ****************\n";

    cout << " Testing int:\n";
    cout << "Should print out 0 4 1 2 3: ";
    iL.reverseIterator();
    iL.printList();
    cout << "Iterator should be 4: " << iL.getIterator() << endl;

    cout << "\n Testing string: \n";
    cout << "Should print out a e b c d: ";
    sL.reverseIterator();
    sL.printList();
    cout << "Iterator should be e: " << sL.getIterator() << endl;

    //eL.reverseIterator(); //Testing assert

    cout << endl << endl;

    cout << "*************** Testing offEnd *************************\n";
    cout << "List should be offEnd: ";
    if(eL.offEnd())
          cout << "List is offEnd!\n";
    else
          cout << "List is not offEnd!\n";
    cout << endl;

    cout << "List should not be offEnd: ";
    if(iL.offEnd())
          cout << "List is offEnd!\n";
    else
          cout << "List is not offEnd!\n";

    cout << endl << endl;

    cout << "*************** Testing removeIterator *****************\n";

    cout << " Testing int:\n";
    cout << "Should print out 0 1 2 3: ";
    iL.removeIterator();
    iL.printList();

    cout << "\n Testing string: \n";
    cout << "Should print out a b c d: ";
    sL.removeIterator();
    sL.printList();

    //eL.removeIterator(); //Testing assert

    cout << endl << endl;

    cout << "*************** Testing reversePrint *******************\n";
    cout << " Testing int:\n";
    cout << "Should print out 3 2 1 0: ";
    iL.reversePrint();

    cout << endl;

    cout << "\n Testing string: \n";
    cout << "Should print out d c b a: ";
    sL.reversePrint();

    cout << endl;

    cout << "\n Testing empty: \n";
    cout << "Should print out nothing: ";
    eL.reversePrint();

    cout << endl << endl;

    cout << "*************** Testing removeFirst ********************\n";

	cout << " Testing int:\n";
    iL.removeFirst();
    cout << "Should print out 1 2 3: ";
    iL.printList();

    iL.removeFirst();
    cout << "Should print out 2 3: ";
    iL.printList();

    cout << "\n Testing string: \n";
    sL.removeFirst();
    cout << "Should print out b c d: ";
    sL.printList();

    sL.removeFirst();
    cout << "Should print out c d: ";
    sL.printList();

    //eL.removeFirst(); //Testing assertion

    cout << endl << endl;

    cout << "*************** Testing removeLast *********************\n";

	cout << " Testing int:\n";
    iL.removeLast();
    cout << "Should print out 2: ";
    iL.printList();

    iL.removeLast();
    cout << "Should print out nothing: ";
    iL.printList();

    cout << "\n Testing string: \n";
    sL.removeLast();
    cout << "Should print out c: ";
    sL.printList();

    sL.removeLast();
    cout << "Should print out nothing: ";
    sL.printList();

    //eL.removeLast(); //Testing assertion

    cout << endl << endl;

    cout << "*************** Testing Copy Constructor ***************\n";

    // add data to lists being copied
    iL.insertFirst(1);
    iL.insertLast(2);
    sL.insertLast("lol");

    List<int> iLcopy(iL);		// copy constructor
    List<string> sLcopy = sL;  	// also calls copy constr
    cout << "Should print 1 2: ";
    iLcopy.printList();
    cout << "Should print out lol: ";
    sLcopy.printList();


    cout << endl << endl;

	return 0;
}
/*
*************** Testing insertFirst *****************
 Testing int:
Should print out nothing:
Should print out 1: 1
Should print out 0 1: 0 1

 Testing string:
Should print out b: b
Should print out a b: a b


*************** Testing insertLast ******************
 Testing int:
Should print out 0 1 2: 0 1 2
Should print out 0 1 2 3: 0 1 2 3

 Testing string:
Should print out a b c: a b c
Should print out a b c d: a b c d


*************** Testing getFirst ********************
 Testing int:
Should print out 0: 0

 Testing string:
Should print out a: a


*************** Testing getLast **********************
 Testing int:
Should print out 3: 3

 Testing string:
Should print out d: d


*************** Testing getLength ********************
Should print out 4: 4

Should print out 4: 4

Should print out 0: 0


*************** Testing isEmpty *********************
List should be empty: List is empty!

List should not be empty: List is not empty!


*************** Testing Operator ==: *****************
List should not be equal: Lists are unequal!

List should be equal: Lists are equal!

*************** Testing isSorted ***********************
List should be sorted: List is sorted!

List should not be sorted: List is not sorted!

List should be sorted: List is sorted!


*************** Testing insertIterator ****************
 Testing int:
Should print out 0 4 1 2 3: 0 4 1 2 3

 Testing string:
Should print out a e b c d: a e b c d


*************** Testing advanceIterator & getIterator****
 Testing int:
Should print out 0 4 1 2 3: 0 4 1 2 3
Iterator should be 4: 4

 Testing string:
Should print out a e b c d: a e b c d
Iterator should be e: e


*************** Testing getIndex ***********************
 Testing int:
Should print out 2: 2

 Testing string:
Should print out 2: 2


*************** Testing advanceToIndex ******************
 Testing int:
Should print out 5: 5

 Testing string:
Should print out 4: 4


*************** Testing linearSearch ********************
 Testing int:
Should print out 5: 5

Should print out -1: -1

 Testing string:
Should print out 4: 4


*************** Testing binarySearch ********************
 Testing int:
Iterator should be at 0: 0
Should print out 1: 1
Should print out 2: 2
Should print out 3: 3
Should print out 4: 4
Should print out 5: 5
Iterator should still be at 0: 0

Iterator should be at b: b
 Testing string:
Should print out 1: 1
Should print out 2: 2
Should print out 3: 3
Should print out 4: 4
Iterator should still be at b: b


*************** Testing reverseIterator ****************
 Testing int:
Should print out 0 4 1 2 3: 0 4 1 2 3
Iterator should be 4: 4

 Testing string:
Should print out a e b c d: a e b c d
Iterator should be e: e


*************** Testing offEnd *************************
List should be offEnd: List is offEnd!

List should not be offEnd: List is not offEnd!


*************** Testing removeIterator *****************
 Testing int:
Should print out 0 1 2 3: 0 1 2 3

 Testing string:
Should print out a b c d: a b c d


*************** Testing reversePrint *******************
 Testing int:
Should print out 3 2 1 0: 3 2 1 0

 Testing string:
Should print out d c b a: d c b a

 Testing empty:
Should print out nothing:

*************** Testing removeFirst ********************
 Testing int:
Should print out 1 2 3: 1 2 3
Should print out 2 3: 2 3

 Testing string:
Should print out b c d: b c d
Should print out c d: c d


*************** Testing removeLast *********************
 Testing int:
Should print out 2: 2
Should print out nothing:

 Testing string:
Should print out c: c
Should print out nothing:


*************** Testing Copy Constructor ***************
Should print 1 2: 1 2
Should print out lol: lol
*/
