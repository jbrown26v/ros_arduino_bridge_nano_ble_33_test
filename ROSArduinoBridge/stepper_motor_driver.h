/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef MICROSTEP_DRIVER
  #define MOTOR_PWM 2
  #define MOTOR_DIR 3
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
