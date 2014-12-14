class hello{

    public static String remove(String s, String v){
        StringBuilder sb = new StringBuilder();
        String s1 = s.toLowerCase();
        String v1 = v.toLowerCase();
        for(int i=0; i<s1.length(); i++){
            if(v1.indexOf(s1.charAt(i)) > -1){
                continue;
            }
            sb.append(s1.charAt(i)); 
        }

        return sb.toString();
    }


    public static String remove(String s){
        StringBuilder sb = new StringBuilder();
        String v = "aeiouAEIOU";
        for(int i=0; i<s.length(); i++){
            char c = s.charAt(i);
            if(v.indexOf(c) == -1)
                sb.append(c);
        }
        return sb.toString();
    }

    public static void main(String[] args){
        System.out.println(remove("HEllo World", "aeiou"));
        System.out.println(remove("HEllo World"));
    }
}
