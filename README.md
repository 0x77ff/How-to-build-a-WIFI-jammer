# How To Build a Wifi jammer!
Here is a guide with the best info on building a DIY, but powerful, wifi jammer, because i cant find any on the internet and want to spread the knowledge.\
Please remember that using a jammer is usually illegal and can land you in jail.
### Table of content
\
• [Project Overview](https://github.com/0x77ff/How-to-build-a-WIFI-jammer/blob/main/README.md#project-overview)\
• [Which module for you](https://github.com/0x77ff/How-to-build-a-WIFI-jammer/blob/main/README.md#which-module-for-you)\
• [Build instructions](https://github.com/0x77ff/How-to-build-a-WIFI-jammer/blob/main/README.md#build-instructions)

## Project Overview
This project is based on Arduino nano and utilizes the NRF24L01 module for easy construction. It is designed to be both cheap and effective.\
It can jam Wi-Fi within up to 10-15 metres away!\
The NRF24L01 is used as our jammer module and the Arduino nano is used to interface with it.\
You can expect range of about 5m-10m+ depending on which nrf24l01 module you choose.\
This is a very simple and beginner friendly project that anyone can build, so lets get to building it!

## Which module for you
Now you may think that there is only one NRF24L01 module, but you would be wrong.\
The basic NRF24L01 module is not the most powerful, with only 1mw of transmit power (0 dBm), which is very little for an effective jammer.\
\
**Here are the modules that i would recommend**:\
\
• The [E01-ML01DP5](https://www.cdebyte.com/products/E01-ML01DP5) by EBYTE is based of the NRF24L01, but it has **100mw** (20 dBm) of transmit power, which is very strong. This is ususally the legal limit in most countries so check local law.\
\
• The [E01-2G4M27D](https://www.ebyte.com/en/product-view-news.aspx?id=450) by EBYTE is also based of the NRF24L01, but it has **500mw** (27 dBm) of transmit power. This is For people who want even more power.\
\
**Purchase links**:\
\
• [E01-ML01DP5](www.aliexpress.com/item/32783191387.html)\
• [E01-2G4M27D](https://www.aliexpress.com/item/1005003290204272.html)\
• [Arduino Nano](https://www.aliexpress.com/item/1005006128051481.html)

## Build instructions
You first need your NRF module, an arduino nano, and a breadboard.\
**Schematics**:\
![image](https://github.com/0x77ff/How-to-build-a-WIFI-jammer/assets/116833814/6cf92e4d-8364-4592-8bcb-710bf49d1fbc)
\
Once wired, upload *jammer.ino* to the Arduino.\
You will first need to have installed the RF24 arduino library.\
\
Congratulations, you now have a made your WI-FI jammer!
```
Please remember that using a WI-FI jammer is illegal in an unauthorized space, so use responsibly!
```
