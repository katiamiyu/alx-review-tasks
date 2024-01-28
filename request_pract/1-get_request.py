#!/usr/bin/python3
""" module contain python get request task """


import requests
if __name__ == '__main__':
    """ this will run only if module is not imported
        for the site httpbin.org
        httpbin.org is the url and get is the route
        parameters can be added to the url if needed
        using params argument
    """
    payload = {'firstName': 'ade', 'lastName': 'bayo'}
    r = requests.get("http://httpbin.org/get", params=payload)
    print(f'{r.status_code} for {r.url}')
