import pandas as pd

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    result_table = customers.drop_duplicates(subset=['email'],keep='first')
    return result_table