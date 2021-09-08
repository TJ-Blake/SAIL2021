#pragma config(Motor,  port2,           rightwheel,    tmotorServoContinuousRotation, openLoop, driveLeft)
#pragma config(Motor,  port9,           leftwheel,     tmotorServoContinuousRotation, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//This
//    Area
//        Is
//          The
//             Code
//                 For
//                    The
//                       Wheels
task main()
{
int speed1 = Ch2;
int speed2 = Ch4;


	// rightwheel values are reversed
	while (true)	{
		if (vexRT[Ch2]>20)   {
			//forewards
			motor(leftwheel)=speed1;
			motor(rightwheel)=-speed1;
		}

		if (vexRT[Ch2]<-20)		{
			//backwards
			motor(leftwheel)=-speed1;
			motor(rightwheel)=speed1;
		}


		if (vexRT[Ch2]<20 && vexRT[Ch2]>-20)   {
			// N U L L
			motor(leftwheel)=0;
			motor(rightwheel)=0;
		}

		if (vexRT[Ch4]<20 && vexRT[Ch4]>-20)   {
			// N U L L
			motor(leftwheel)=0;
			motor(rightwheel)=0;
		}


		if (vexRT[Ch4]<-20)   {
			//turn right
			motor(leftwheel)=speed2;
			motor(rightwheel)=speed2;
		}

		if (vexRT[Ch4]>20)		{
			//turn left
			motor(leftwheel)=-speed2;
			motor(rightwheel)=-speed2;

		}
	}























}
