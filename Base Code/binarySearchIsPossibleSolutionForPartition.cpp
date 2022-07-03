bool isPossibleSolution(vector<int> arrayOfItems, int totalNumberOfItems, int totalNumberOfPeople, int overflowPoint) {
    int person = 1; // starting with first person
    int materialToBeAllocated = 0; // amount allocated to current person
    for(int i = 0; i < totalNumberOfItems; i++) {
        if(materialToBeAllocated + arrayOfItems[i] <= overflowPoint) materialToBeAllocated += arrayOfItems[i]; // keep allocating until he is overloaded
        else {
            person++; // if overloaded, move to next person
            if(person > totalNumberOfPeople || arrayOfItems[i] > overflowPoint) return false; // if everyone is over
            materialToBeAllocated = arrayOfItems[i];
        }
    }
    return true;
}