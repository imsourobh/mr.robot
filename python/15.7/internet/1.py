import requests

url="http://sites.google.com/view/imsourobh"

response=requests.get(url)

with open("imsourobh.html","w") as f:
    f.write(response.text)
 