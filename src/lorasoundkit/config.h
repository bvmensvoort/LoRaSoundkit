/** 
 * Define here your configuration
 * - cyclecount 
 * - LoRa TTN keys
 * Marcel Meek, May 2020
 * 
 */

#ifndef _CONFIG_h /* Prevent loading library twice */
#define _CONFIG_h

// define im milleseconds how often a message will be sent
#define CYCLECOUNT   20000  //60000

// specify here TTN keys
//#define APPEUI "0000000000000000"
//#define DEVEUI "0000000000000000"
//#define APPKEY "00000000000000000000000000000000"

#define APPEUI "70B3D57ED003ED46"
#define DEVEUI "0000000000000001"
#define APPKEY "80489B327CB6058C93614F5DC8187CD4"


// Some aestethical options
#define SHOWMINMAX  true   // Instead of dB(A), dB(C), dB(Z), show minimum, average and maximum of dB(Z)
#define SHOWCYCLEPROGRESS   true


// For easy debugging
#define CONNECTTOLORA true

#endif
