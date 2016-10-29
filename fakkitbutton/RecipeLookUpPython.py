#!/usr/bin/env python
# -*- coding: utf-8 -*-
import json
import requests

API_KEY = "d6fd8f87abed004a5a382e1f2a9c30ae"
url1 = "http://food2fork.com/api/search?"
url2 = "http://food2fork.com/api/get?"

# example: http://food2fork.com/api/search?key=d6fd8f87abed004a5a382e1f2a9c30ae&q=shredded%20chicken

def recipe(food):
    get_url1 = url1 + "key=" + API_KEY + "&q=" + food
    get_recipe = requests.get(get_url1)
    get_recipe_json = get_recipe.json()
    #print json.dumps(get_recipe_json, indent=4, separators=(',', ':'))
    for item in get_recipe_json['recipes']:
        print item['title']
        print("By " + item['publisher'])
        print("Recipe id# " + item['recipe_id'] + "\n")

def ingredients(idrecipe):
    get_url2 = url2 + "key=" + API_KEY + "&rId=" + idrecipe
    get_ingredients = requests.get(get_url2)
    get_ingredients_json = get_ingredients.json()
    print(get_ingredients_json['recipe']['title'])
    print("\n")
    #for i in get_ingredients_json['recipe']['ingredients']:
        #print [i]
    print json.dumps(get_ingredients_json['recipe']['ingredients'], indent=4, separators=(',', ':'))

#inp = raw_input("\nWhat would you like to cook today? \n")
#print("\n")
recipe(inp)
#idnumber = raw_input("Enter the Recipe id# for the recipe ingredients: \n")
#print("\n")
#ingredients(idnumber)
