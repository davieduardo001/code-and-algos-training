def main():
    print(cakes({'cream': 100, 'chocolate': 67, 'flour': 60}, {'nuts': 7893, 'oil': 2896, 'apples': 6367, 'cream': 5600, 'sugar': 8469, 'pears': 8850, 'eggs': 9234, 'flour': 7057, 'milk': 3130, 'chocolate': 2737}))

def cakes(recipe, available):
    for x in recipe:
        if x not in available:
            return 0
   
    for x in recipe:
        recipe[x] = available[x] / recipe[x]
    
    return int(min(recipe.values()))

main()
