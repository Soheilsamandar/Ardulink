this function is for send data from pyrhon to arduino or receive data from arduino 
in this code we using the pyserail library you can download with pip install pyserial (download in python 3.7 or above)


1. ser = serail.Serial("COM" , baudrate(arduino baudrate))
2. data = f'{x}\n' we use sending data format b'...\n or binary data 
