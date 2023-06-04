import urllib.request
import json


def latest_movies_api():
    url = "https://api.themoviedb.org/3/trending/movie/week?" \
          "api_key=752cf91a3d44af738d2024db6eb850d3"
    json_obj = urllib.request.urlopen(url)
    data = json.load(json_obj)
    results = data["results"]
    top = results[0:10]

    def top_movies():
        count_m = 0
        for movie in top:
            count_m += 1
            print(count_m, ":", movie["title"])

    return top_movies()


def ranking_api():
    url = "https://api.themoviedb.org/3/movie/top_rated?" \
          "api_key=752cf91a3d44af738d2024db6eb850d3&language=en-US&page=1"
    json_obj = urllib.request.urlopen(url)
    data = json.load(json_obj)
    results = data["results"]
    top = results[0:10]

    def top_movies():
        count = 0
        for movie in top:
            count += 1
            print(count, ":", movie["title"])

    return top_movies()


def search_api(movie_name):
    search_url = "https://api.themoviedb.org/3/search/movie?api_key=752cf91a3d44af738d2024db6eb850d3&language=en-US&" \
                 "query=" + str(movie_name) + "&page=1&include_adult=false"
    json_obj_search = urllib.request.urlopen(search_url)
    data_search = json.load(json_obj_search)
    search_results = data_search["results"]
    try:
        first_movie = search_results[0]
        return first_movie
    except IndexError:
        print("I am very sorry but I can not find the movie:",
              movie_name, "\nPlease enter correct spelling of the movie!")


def review_api(movie):
    try:
        searched_movie = search_api(movie)
        movie_id = searched_movie["id"]
        review_url = "https://api.themoviedb.org/3/movie/" + str(movie_id) + \
                     "/reviews?api_key=752cf91a3d44af738d2024db6eb850d3&page=1"
        json_obj_review = urllib.request.urlopen(review_url)
        data_review = json.load(json_obj_review)
        review_results = data_review["results"]
        for i in range(3):
            first_review = review_results[i]
            audience_review = first_review["content"]

            author_details = first_review["author_details"]
            username = author_details["username"]
            rating = author_details["rating"]
            print(i + 1, "->", "Username:", username, (" " * 4), "User Rating:", rating, "\n", "Review:",
                  audience_review, "\n\n")
    except TypeError:
        print("Please try again next time!")


def movie_info(movie_name_for_info):
    try:
        first_movie = search_api(movie_name_for_info)
        out = print(first_movie["overview"])
        return out
    except TypeError:
        print("Please try again next time!")
