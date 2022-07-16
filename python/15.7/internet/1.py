import requests

#saving the link in url variable
url="http://sites.google.com/view/imsourobh"

#saving the returned value of get() in response
response=requests.get(url)

#opening insourobh.html file with writing permission
 

if response.ok==True:
    with open("imsourobh.html","w") as f:
        f.write(response.text)
    print("HTML is saved to imsourobh.html file.")

