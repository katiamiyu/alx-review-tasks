#!/usr/bin/python3
""" module contain python post request task """


import requests
if __name__ == '__main__':
    """ this will run only if module is not imported
        for the site httpbin.org
        httpbin.org is the url and get is the route
        form data can be added to the url if needed
        using data argument
    """
    payload = {'firstName': 'ade', 'lastName': 'bayo'}
    r = requests.post("http://httpbin.org/post", data=payload)
    print(f'{r.status_code} for {r.url}')
    print()
    print(r.content)
    print()
    print(r.text)
    print(len(r.text))
