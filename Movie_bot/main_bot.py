
# to delete unwanted words and to put them in lists as individual elements
def filter_word(words):
    lower_words = words.lower()
    list_words = lower_words.split(" ")  # elements are separated by space
    for each in extra_words:
        for each_item in list_words:
            if each_item == each:
                list_words.remove(each)
    return list_words


def latest_movies_words(latest_words):
    filter_words = filter_word(latest_words)
    count = 0
    for each in latest_movies_data:
        for each_extra in filter_words:
            if each_extra == each:
                count += 1

    if count >= 1:
        out = True
        return out


def ranking(ranking_words):
    filter_words = filter_word(ranking_words)
    count = 0
    for each in ranking_data:
        for each_extra in filter_words:
            if each_extra == each:
                count += 1

    if count >= 1:
        out = True
        return out


def review(review_words):
    filter_words = filter_word(review_words)
    count = 0
    for each in movie_review_data:
        for each_extra in filter_words:
            if each_extra == each:
                count += 1

    if count >= 1:
        out = True
        return out


def choose_api(choose_api, review_words):
    latest_movies = latest_movies_words(choose_api)
    if latest_movies == True:
        return latest_movies_api()

    ranking_movies = ranking(choose_api)
    if ranking_movies == True:
        return ranking_api()

    review_movie = review(choose_api)
    if review_movie == True:
        review_word_list = filter_word(review_words)
        for each in movie_review_data:
            for each_item in review_word_list:
                if each_item == each:
                    review_word_list.remove(each)
        return review_api(review_word_list)

    else:
        movie_name = filter_word(choose_api)
        return movie_info(movie_name)


from data import *
from request_api import *
