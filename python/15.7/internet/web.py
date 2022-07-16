import requests

url="http://sites.google.com/view/imsourobh"

response=requsts.get(url)

with open("dimik.html","w") as f:
    f.write(response.text)
    print("file is being saved!!")