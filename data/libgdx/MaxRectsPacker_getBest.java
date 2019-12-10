private Page getBest(Page result1, Page result2) {
    if (result1 == null)
        return result2;
    if (result2 == null)
        return result1;
    return result1.occupancy > result2.occupancy ? result1 : result2;
}
