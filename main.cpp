#include "generator.h"

int main(){
        int value;
        int repetitions;
	int outp;

        cout << "Number: " << endl;
        
	cin >> value;

        cout << "Repetitions: " << endl;
        
	cin >> repetitions;

        outp = run(value, repetitions);
        
	cout << "Balanced Lists & repetitions: " << outp << " ; " << repetitions << endl;
        cout << "Percent Success: " << (outp / float(repetitions) * 100) << endl;

        return 0;
}
