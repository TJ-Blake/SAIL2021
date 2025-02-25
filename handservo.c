#pragma config(Motor,  port4,           HandServo,     tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {						 			// Start handServoStart task
	int i = 0; 											 			// Initiate i here outside of while loop lexical scope
	while(true) { 									 			// Run forever
		if(vexRT[Btn6U] == 1) { 			 			// If the Button is down, run this:
			for(int k = 0; k < 127; k++) {		// Declare int k, if k is greater than -127, subtract 1 from k and,
				i = k;													// Set j to k
				wait10Msec(10);									// Wait 100 Milliseconds
		  }
		} else if(vexRT[Btn6D] == 1) { 			// Else, if Button is down, run this:
			for(int k = 0; k > -127; k--) {		// Declare int k, if k is greater than -127, subtract 1 from k and,
				i = k;													// Set j to k
				wait10Msec(10);									// Wait 100 Milliseconds
		  }
	  }
		motor[HandServo] = 0 + i;      			// Add whatever i is to the motor
	}
	wait1Msec(20); 								 				// wait 20 milliseconds
}