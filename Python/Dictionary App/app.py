import json, requests, pyfiglet


def get_meaning(ml):
    final_list = []
    counter = 1
    for list in ml:
        for dic in list:
            # print(type(dic))
            # print(dic['definition'])
            final_list.append(dic['definition'])
    
    for definitions in final_list:
        print(f"{counter}. {definitions} \n")
        counter += 1

def get_info(url, query):
    response = requests.get(url)
    raw_json = response.text
    parsed = json.loads(raw_json)
    # print(json.dumps(parsed, indent=4, sort_keys=True))
    # print(type(parsed))

    for _ in parsed:
        main_dict = _["meanings"].copy()

    # print(json.dumps(main_dict, indent=4, sort_keys=True))
    def_list = []
    for __ in main_dict:
        def_list.append(__['definitions'])

    print(f"\n Searching the dictionary for {query}!")
    print("\n Please wait... \n")

    get_meaning(def_list)

if __name__ == "__main__":
    heading = pyfiglet.figlet_format("PY-DICT")
    print(heading)

    query = input("Enter the word >>> ")

    url = f"https://api.dictionaryapi.dev/api/v2/entries/en/{query}"

    get_info(url, query)