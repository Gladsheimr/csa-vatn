# Overview 

Passively track water usage and its effect on health signals such as lethargy, headaches and sleep. 

## Collect Data 

Using the [PBM](https://www.arduino.cc/en/Reference/PDM) library we need to collect samples and process them into a format that 
can be sent using [Edge Impulse C Ingestion SDK](https://docs.edgeimpulse.com/reference#c-sdk-usage-guide). 

One challenge is that instead of the regular arduino ide we will have to mbed-cli so that we can implement the mbed-tls requirement. 


# TODO
1. Collect PDM samples and make a training dataset
 1. We can do a manual process for now to get the AI work going 
2. Work on getting mbed-tls and Ingestion SDK work 
3. Work on getting the inference SDK integrated but with tensorflow micro as a backend 
4. Refactor and build orchestration toolkits to monitor the health of this application

