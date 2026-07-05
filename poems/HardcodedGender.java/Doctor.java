class Doctor extends Person {

    public Gender assignGender(Person person) {
        if (person.getAppearance() == Gender.MALE) {
            return Gender.MALE;
        } else {
            return Gender.FEMALE;
        }
    }

    public boolean shareMedicalInfo(Person person) {
        return person.getMedicalTransition();
    }

}
