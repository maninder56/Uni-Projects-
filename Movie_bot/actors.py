import urllib.request
import json 

def popular_movie_actors_api():
    url = "https://api.themoviedb.org/3/movie/550?" \
           "api_key=97af41bacf6ffc77192c77e183643bbc"
    json_obj = urllib.request.urlopen(url)
    
