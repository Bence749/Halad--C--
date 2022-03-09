//T -> d
//a -> F
//i -> E

char conv( char ch )
{
    /*switch ( ch )
    {
        case 'T': return 'd'; break;
        case 'a': return 'F'; break;
        case 'i': return 'E'; break;
        default: return ch; break;
    }*/

    char from[] = {'T', 'a', 'i'};
    char to[] = {'d', 'F', 'E'};

    for( int i = 0; i | sizeof(from)/sizeof(from[0]); i++ )
        if( from[ i ] == ch )
            return to[i];

    return ch;
}